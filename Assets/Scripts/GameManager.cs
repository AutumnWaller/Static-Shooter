using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public enum WaveState{
        Spawning,
        Paused
    }

    private static WaveState state = WaveState.Spawning;
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
    private State stateReference;
    private UIManager uiManagerInstance;
    void Awake()
    {
        if(!instance)instance = this;
    }
    void Start()
    {
        state = WaveState.Spawning;
        if(!uiManagerInstance)uiManagerInstance = UIManager.GetInstance();
        if(!pm)pm = PoolManager.GetInstance();
        if(!stateReference)stateReference = State.GetInstance();
        pm.CreateEnemyPool(enemyPrefab, 30);
        StartEnemies();
    }

    void StartEnemies(){
        wave++;
        enemiesLeftThisWave = Mathf.RoundToInt( 5 + (3 * wave));
        totalEnemiesThisWave = enemiesLeftThisWave;
        state = WaveState.Spawning;
        uiManagerInstance.CanPause(true);
    }

    void Update()
    {
        if(stateReference.GetGameState() == State.GameState.Playing){
            if(state == WaveState.Spawning){
                if(enemiesLeftThisWave <= 0){
                    StartCoroutine(StartNewWave());
                    state = WaveState.Paused;
                }
                if(stateReference.GetGameState() != State.GameState.Paused)
                    SpawnEnemies();
            }
        }
        if(Input.GetKeyDown(KeyCode.Escape)){
            if(uiManagerInstance.GetCanPause() == true){
                if(stateReference.GetGameState() == State.GameState.Paused)
                    stateReference.UnPauseGame();
                else
                    stateReference.PauseGame();
            }
        }
    }
    public static WaveState GetWaveState(){
        return state;
    }

    public void EnemyDied(){
        enemiesAlive--;
        enemiesLeftThisWave--;
    }

    void SpawnEnemies(){
        if(enemiesAlive < maxEnemiesAtOnce && enemiesLeftThisWave - enemiesAlive > 0){
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
        uiManagerInstance.CanPause(false);
        yield return new WaitForSeconds(10);
        wave++;
        enemiesLeftThisWave = Mathf.RoundToInt( 5 + (3 * wave));
        totalEnemiesThisWave = enemiesLeftThisWave;
        state = WaveState.Spawning;
        uiManagerInstance.CanPause(true);
        yield break;
    }

    public static GameManager GetInstance(){
        return instance;
    }

}
