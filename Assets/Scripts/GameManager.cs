using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public int wave;
    PoolManager pm;
    public List<Spawner> spawners;
    public GameObject enemyPrefab;

    int enemiesAlive = 0;
    public int maxEnemiesAtOnce = 30;
    float timeUntilNewSpawn = 1;

    void Start()
    {
        pm = PoolManager.GetInstance();
        pm.CreateEnemyPool(enemyPrefab, 30);
    }
    void Update()
    {
        if(enemiesAlive < maxEnemiesAtOnce){
            if(timeUntilNewSpawn <= 0){
                timeUntilNewSpawn = 1;
                spawners[Random.Range(0, spawners.Count)].Spawn(pm.GetEnemyFromPool());
                enemiesAlive++;
            }else{
                timeUntilNewSpawn -= Time.deltaTime;
            }
        }
    }

}
