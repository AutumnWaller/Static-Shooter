using UnityEngine;
public class State : MonoBehaviour
{
    public enum GameState
    {
        Paused,
        Playing,
        Buying,
        GameOver
    };

    public enum WaveState
    {
        Spawning,
        Paused
    }

    private static State instance;
    private GameState gameState = GameState.Playing;
    private WaveState waveState = WaveState.Spawning;

    void Awake()
    {
        if (!instance) instance = this;
    }
    public static State GetInstance()
    {
        return instance;
    }

    // Game State
    public GameState GetGameState()
    {
        return gameState;
    }

    private void SetGameState(GameState newState)
    {
        gameState = newState;
        OnGameStateChanged();
    }

    public delegate void StateChanged();
    public event StateChanged GameStateChanged;
    private void OnGameStateChanged()
    {
        if (GameStateChanged != null)
        {
            GameStateChanged?.Invoke();
        }
    }
    #region SetGameState
    public void PauseGame()
    {
        SetGameState(GameState.Paused);
    }

    public void UnPauseGame()
    {
        SetGameState(GameState.Playing);
    }

    public void GameOver()
    {
        SetGameState(GameState.GameOver);
    }

    public void Shop()
    {
        SetGameState(GameState.Buying);
    }
    #endregion

    //Wave State
    public WaveState GetWaveState()
    {
        return waveState;
    }

    private void SetWaveState(WaveState state)
    {
        waveState = state;
        OnWaveStateChanged();
    }

    public event StateChanged WaveStateChanged;

    private void OnWaveStateChanged()
    {
        if (WaveStateChanged != null)
        {
            WaveStateChanged?.Invoke();
        }
    }

    public void SetWaveStatePaused()
    {
        SetWaveState(WaveState.Paused);
    }

    public void SetWaveStateSpawning()
    {
        SetWaveState(WaveState.Spawning);
    }

}
