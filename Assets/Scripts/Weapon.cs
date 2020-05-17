using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public int damagePerShot;
    public int ammo; //Ammo types?
    public float knockbackModifier = 1;
    private Ray ray;
    public ParticleSystem muzzleFlashParticle;
    private AudioSource gunshotSource;

    protected virtual void Awake(){
        gunshotSource = GetComponent<AudioSource>();
    }

    protected virtual void Update(){
        ray = new Ray(transform.position, transform.forward);
    }

    
    RaycastHit hit;

    public virtual void Shoot(){
        if(ammo <= 0)
            return;
        muzzleFlashParticle.Play();
        gunshotSource.PlayOneShot(gunshotSource.clip);
        ammo--;
        Physics.Raycast(ray, out hit);
        if(hit.transform == null)
            return;
        IDamageable damageable;
        if((damageable = hit.transform.GetComponent<IDamageable>()) != null){
            damageable.TakeKnockBack((transform.rotation.eulerAngles + transform.forward) * knockbackModifier);
            damageable.TakeDamage(damagePerShot);
        }
    }

    private void OnDrawGizmos()
    {
        Gizmos.DrawRay(ray);
    }
}
