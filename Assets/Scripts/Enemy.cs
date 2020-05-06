using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : Character, IDamageable
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

    void IDamageable.TakeDamage(){
        health -= 25;
        if(health <= 0)
            Die();
    }

    void Die(){
        health = 100;
        agent.velocity = Vector3.zero;
        knockbackDelay = 0;
        gameObject.SetActive(false);
        //Spawn a "corpse"
    }
    void IDamageable.TakeKnockBack(Vector3 direction){
        Vector3 force = direction; 
        force.x *= 0.02f;
        force.y *= 0.5f;
        force.z *= 0.02f;
        agent.velocity += force;
        knockbackDelay = 0.25f;
    }
}
