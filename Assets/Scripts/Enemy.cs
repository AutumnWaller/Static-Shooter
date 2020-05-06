using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Character, IDamageable
{
    Rigidbody rigidbody;

    void Start() {
        rigidbody = GetComponent<Rigidbody>();
    }
    void IDamageable.TakeDamage(){
        health -= 25;
        if(health <= 0)
            Die();
    }

    void Die(){
        gameObject.SetActive(false);
        //Spawn a "corpse"
    }
    void IDamageable.TakeKnockBack(Vector3 direction){
        Vector3 force = direction; 
        force.x *= 2000;
        force.y *= 20;
        force.z *= 2000;
        rigidbody.AddForce(force);
    }
}
