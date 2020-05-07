using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    [Range(0, 10)]
    public float spawnerRadius;
    public GameObject objToSpawn;
    PoolManager pm;

    void Awake()
    {
        pm = PoolManager.GetInstance();
    }
    public void Spawn(GameObject objToSpawn){
        if(objToSpawn == null)
            return;
        float randomX, randomZ;
        randomX = Random.Range(-spawnerRadius, spawnerRadius);
        randomZ = Random.Range(-spawnerRadius, spawnerRadius);
        objToSpawn.transform.position = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);
        objToSpawn.SetActive(true);
    }

    void OnDrawGizmos()
    {
        Gizmos.DrawWireSphere(transform.position, spawnerRadius);
    }
}
