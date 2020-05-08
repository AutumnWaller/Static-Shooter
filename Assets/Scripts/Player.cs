using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Player : Character
{
    Ray ray;

    public Weapon weapon;
    static Transform playerTransform;
    void Start()
    {
        playerTransform = transform;
        weapon = GetComponent<Weapon>();
    }
    void Update()
    {
        if(GameManager.GetGameState() == GameManager.GameState.Playing){
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

    void OnDrawGizmos()
    {
        Gizmos.DrawRay(ray);
    }

}
