using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Character, IDamageable
{
    Rigidbody rigidbody;
    float knockbackDelay = 0;
    void Start() {
        rigidbody = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if(knockbackDelay > 0){
            knockbackDelay -= Time.deltaTime;
            if(knockbackDelay <= 0){
                knockbackDelay = 0;
                rigidbody.velocity = Vector3.zero;
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
        rigidbody.velocity = Vector3.zero;
        knockbackDelay = 0;
        gameObject.SetActive(false);
        //Spawn a "corpse"
    }
    void IDamageable.TakeKnockBack(Vector3 direction){
        Vector3 force = direction; 
        force.x *= 0.2f;
        force.y *= 5;
        force.z *= 0.2f;
        rigidbody.AddForce(force);
        knockbackDelay = 0.25f;
    }
}
