using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageableBarricade : Damageable, IDamageable
{

    void IDamageable.TakeDamage(int damage){
        health -= damage;
        if(health <= 0)
            gameObject.SetActive(false);
    }

    void IDamageable.TakeKnockBack(Vector3 direction){
        return;
    }
}
