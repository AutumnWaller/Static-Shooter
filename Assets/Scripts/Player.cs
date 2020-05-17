using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Player : Damageable, IDamageable
{
    Ray ray;
    State stateReference;

    public Weapon weapon;
    void Start()
    {
        stateReference = State.GetInstance();
    }

    void Update()
    {
        if(stateReference.GetGameState() == State.GameState.Playing){
            ray = new Ray(transform.position, transform.forward);
            RotateToMouse();
            if(Input.GetMouseButtonDown(0))
                weapon.Shoot();
        }
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

    void IDamageable.TakeDamage(int damage){
        health -= damage;
        if(health <= 0){
            stateReference.GameOver();
        }
    }

    void IDamageable.TakeKnockBack(Vector3 direction){
        return; //Player doesn't take knockback
    }
    void OnDrawGizmos()
    {
        Gizmos.DrawRay(ray);
    }



}
