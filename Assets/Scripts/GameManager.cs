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
    private UIManager uiManagerInstance;
    void Awake()
    {
        instance = this;
    }
    void Start()
    {
        uiManagerInstance = UIManager.GetInstance();
        pm = PoolManager.GetInstance();
        pm.CreateEnemyPool(enemyPrefab, 30);
    }
    void Update()
    {
        if(State.GetGameState() == State.GameState.Playing){
            if(state == WaveState.Spawning){
                if(enemiesLeftThisWave <= 0){
                    StartCoroutine(StartNewWave());
                    state = WaveState.Paused;
                }
                if(State.GetGameState() != State.GameState.Paused)
                    SpawnEnemies();
            }
        }
        if(Input.GetKeyDown(KeyCode.Escape)){
            if(uiManagerInstance.GetCanPause() == true){
                if(State.GetGameState() == State.GameState.Paused)
                    State.UnPauseGame();
                else
                    State.PauseGame();
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
