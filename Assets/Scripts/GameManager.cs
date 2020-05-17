using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{

    public int wave;
    public int enemiesLeftThisWave, totalEnemiesThisWave;
    public bool winButton, loseButton;
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
        if (!instance) instance = this;
    }

    void Start()
    {
        if (!uiManagerInstance) uiManagerInstance = UIManager.GetInstance();
        if (!pm) pm = PoolManager.GetInstance();
        if (!stateReference) stateReference = State.GetInstance();
        stateReference.WaveStateChanged += OnWaveStateChanged;
        stateReference.GameStateChanged += OnGameStateChanged;
        pm.CreateEnemyPool(enemyPrefab, 30);
        StartEnemies();
    }

    void StartEnemies()
    {
        wave++;
        enemiesLeftThisWave = Mathf.RoundToInt(2 + (3 * wave));
        totalEnemiesThisWave = enemiesLeftThisWave;
        uiManagerInstance.CanPause(true);
    }

    private void OnWaveStateChanged()
    {
        //if (stateReference.GetWaveState() == State.WaveState.Paused)
        //{
        //    StartCoroutine(StartNewWave());
        //}
    }

    private void OnGameStateChanged()
    {
        if(lastGameState == State.GameState.Buying)
        {
            StartCoroutine(StartNewWave());
            lastGameState = State.GameState.Playing;
            stateReference.UnPauseGame();
        }
    }

    State.GameState lastGameState = State.GameState.Playing;

    void Update()
    {
        if (winButton)
        {
            enemiesLeftThisWave = 0;
        }
        if (loseButton)
        {
            player.GetComponent<IDamageable>().TakeDamage(100);
        }
        if (stateReference.GetGameState() == State.GameState.Playing && stateReference.GetWaveState() == State.WaveState.Spawning)
        {
            if (enemiesLeftThisWave <= 0)
            {
                stateReference.SetWaveStatePaused();
                Scoring.GetInstance().SurvivedWave();
                //StartCoroutine(StartNewWave());
                stateReference.Shop();
                lastGameState = State.GameState.Buying;
            }

            SpawnEnemies();

        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (uiManagerInstance.GetCanPause())
            {
                if (stateReference.GetGameState() == State.GameState.Paused)
                    stateReference.UnPauseGame();
                else
                    stateReference.PauseGame();
            }
        }
    }

    public void EnemyDied()
    {
        enemiesAlive--;
        enemiesLeftThisWave--;
    }

    void SpawnEnemies()
    {
        if (enemiesAlive < maxEnemiesAtOnce && enemiesLeftThisWave - enemiesAlive > 0)
        {
            if (timeUntilNewSpawn <= 0)
            {
                timeUntilNewSpawn = timeBetweenSpawns;
                spawners[Random.Range(0, spawners.Count)].Spawn(pm.GetEnemyFromPool());
                enemiesAlive++;
            }
            else
            {
                timeUntilNewSpawn -= Time.deltaTime;
            }
        }
    }

    IEnumerator StartNewWave()
    {
        uiManagerInstance.CanPause(false);
        yield return new WaitForSeconds(10);
        stateReference.SetWaveStateSpawning();
        wave++;
        enemiesLeftThisWave = Mathf.RoundToInt(5 + (3 * wave));
        totalEnemiesThisWave = enemiesLeftThisWave;
        uiManagerInstance.CanPause(true);
        yield break;
    }

    public static GameManager GetInstance()
    {
        return instance;
    }

}
