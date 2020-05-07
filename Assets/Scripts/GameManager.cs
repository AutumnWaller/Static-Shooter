using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    enum WaveState{
        Spawning,
        Paused
    }

    WaveState state = WaveState.Paused;
    public int wave;
    public int enemiesLeftThisWave, totalEnemiesThisWave;
    PoolManager pm;
    public List<Spawner> spawners;
    public GameObject enemyPrefab;

    int enemiesAlive = 0;
    public int maxEnemiesAtOnce = 30;
    public float timeBetweenSpawns = 3;
    float timeUntilNewSpawn = 3;
    private float timeUntilNewWave = 10;
    public Player player;

    private static GameManager instance;
    void Awake()
    {
        instance = this;
    }
    void Start()
    {
        pm = PoolManager.GetInstance();
        pm.CreateEnemyPool(enemyPrefab, 30);
        StartCoroutine(StartNewWave());
    }
    void Update()
    {
        if(state == WaveState.Spawning){
            if(enemiesLeftThisWave <= 0){
                StartCoroutine(StartNewWave());
                state = WaveState.Paused;
            }
            SpawnEnemies();
        }

        
    }

    public void EnemyDied(){
        enemiesAlive--;
        enemiesLeftThisWave--;
    }

    void SpawnEnemies(){
        if(enemiesAlive < maxEnemiesAtOnce){
            if(timeUntilNewSpawn <= 0){
                timeUntilNewSpawn = timeBetweenSpawns;
                spawners[Random.Range(0, spawners.Count)].Spawn(pm.GetEnemyFromPool());
                enemiesAlive++;
            }else{
                timeUntilNewSpawn -= Time.deltaTime;
            }
        }
    }

    IEnumerator StartNewWave(){
        yield return new WaitForSeconds(10);
        wave++;
        enemiesLeftThisWave = Mathf.RoundToInt( 5 + (3 * wave));
        totalEnemiesThisWave = enemiesLeftThisWave;
        state = WaveState.Spawning;
        yield break;
    }

    public static GameManager GetInstance(){
        return instance;
    }

}
