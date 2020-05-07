using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public int damagePerShot;
    public int ammo; //Ammo types?
    private Ray ray;
    public ParticleSystem muzzleFlashParticle;

    protected virtual void Awake(){

    }

    protected virtual void Update(){
        ray = new Ray(transform.position, transform.forward);
    }

    
    RaycastHit hit;

    public virtual void Shoot(){
        if(ammo <= 0)
            return;
        muzzleFlashParticle.Play();
        ammo--;
        Physics.Raycast(ray, out hit);
        if(hit.transform == null)
            return;
        IDamageable damageable;
        if((damageable = hit.transform.GetComponent<IDamageable>()) != null){
            damageable.TakeKnockBack(transform.rotation.eulerAngles + transform.forward);
            damageable.TakeDamage(damagePerShot);
        }
    }
}
