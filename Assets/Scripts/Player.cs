using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Player : Character
{
    public ParticleSystem muzzleFlashParticle;
    Ray ray;

    void Update()
    {
        ray = new Ray(transform.position, transform.forward);
        RotateToMouse();
        if(Input.GetMouseButtonDown(0))
            Shoot();
    }

    void RotateToMouse(){
        Vector3 mousePos = Input.mousePosition;
        Vector3 playerViewport = Camera.main.WorldToScreenPoint(transform.position);
        mousePos.x = mousePos.x - playerViewport.x;
        mousePos.y = mousePos.y - playerViewport.y;
        float angle = Mathf.Atan2(mousePos.y, mousePos.x) * Mathf.Rad2Deg - 90;
        if(angle <= 90 && angle >= -90)
            transform.rotation = Quaternion.Euler(0, -angle, 0);
    }

    void Shoot(){
        muzzleFlashParticle.Play();
        RaycastHit hit;
        Physics.Raycast(ray, out hit);
        if(hit.transform == null)
            return;
        Debug.Log(hit.transform.name);
        IDamageable damageable;
        if((damageable = hit.transform.GetComponent<IDamageable>()) != null){
            damageable.TakeKnockBack(transform.rotation.eulerAngles + transform.forward * 1000);
            damageable.TakeDamage();
        }
        Vector3 rot = transform.rotation.eulerAngles;
        rot.x = 90;
        //Instantiate(bullet, transform.position + (transform.forward * 1.1f), Quaternion.Euler(rot)); //Spawn some flash effect
    }

    void OnDrawGizmos()
    {
        Gizmos.DrawRay(ray);
    }

}
