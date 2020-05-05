using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Player : Character
{
    public GameObject bullet;
    void Start()
    {
        
    }


    void Update()
    {
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
        if(angle <= 89 && angle >= -89)
            transform.rotation = Quaternion.Euler(0, -angle, 0);
    }

    void Shoot(){
        RaycastHit hit;
        if(Physics.Raycast(transform.position, transform.position + (transform.forward * 50), out hit)){
            if(hit.transform.tag == "Enemy"){
                hit.transform.GetComponent<Enemy>().TakeDamage();
            }
            Debug.Log(hit.transform.name);
        }
        Vector3 rot = transform.rotation.eulerAngles;
        rot.x = 90;
        //Instantiate(bullet, transform.position + (transform.forward * 1.1f), Quaternion.Euler(rot)); //Spawn some flash effect
    }

    void OnDrawGizmos()
    {
        Gizmos.DrawRay(transform.position, transform.position + (transform.forward * 50));
    }

}
