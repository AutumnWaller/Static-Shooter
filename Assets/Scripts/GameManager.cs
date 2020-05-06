using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public int wave;
    PoolManager poolManager;
    public List<Spawner> spawners;
    public GameObject enemyPrefab;

    int enemiesAlive = 0;
    public int maxEnemiesAtOnce = 30;
    float timeUntilNewSpawn = 5;

    void Awake()
    {
        poolManager = PoolManager.GetInstance();
        poolManager.CreateEnemyPool(enemyPrefab, 30);
    }
    void Update()
    {
        if(enemiesAlive < maxEnemiesAtOnce){
            if(timeUntilNewSpawn <= 0){
                timeUntilNewSpawn = 5;
                spawners[Random.Range(0, spawners.Count)].Spawn();
                enemiesAlive++;
            }else{
                timeUntilNewSpawn -= Time.deltaTime;
            }
        }
    }

}
