using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : Damageable, IDamageable
{
    NavMeshAgent agent;
    float knockbackDelay = 0;
    void Start() {
        agent = GetComponent<NavMeshAgent>();
    }

    void Update()
    {
        if(knockbackDelay > 0){
            knockbackDelay -= Time.deltaTime;
            if(knockbackDelay <= 0){
                knockbackDelay = 0;
                agent.velocity = Vector3.zero;
            }
        }
    }

    void IDamageable.TakeDamage(int damage){
        health -= damage;
        Scoring.GetInstance().EnemyHit(transform.position);
        if(health <= 0)
            Die();
    }

    void Die(){
        health = 100;
        //agent.velocity = Vector3.zero;
        knockbackDelay = 0;
        Scoring.GetInstance().EnemyKill();
        GameManager.GetInstance().EnemyDied();
        gameObject.SetActive(false);
        //Spawn a "corpse"
    }

    void DieNoPoints(){
        health = 100;
        knockbackDelay = 0;
        GameManager.GetInstance().EnemyDied();
        gameObject.SetActive(false);
    }
    void IDamageable.TakeKnockBack(Vector3 direction){
        Vector3 force = direction; 
        agent.velocity += force;
        knockbackDelay = 0.25f;
    }

    void OnCollisionEnter(Collision col)
    {
        if(col.gameObject.tag == "Barricade" || col.gameObject.tag == "Player"){
            IDamageable damageable = col.gameObject.GetComponent<IDamageable>();
            damageable.TakeDamage(50);
            DieNoPoints();
        }
    }

}
