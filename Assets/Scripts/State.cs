using UnityEngine;
public class State : MonoBehaviour
{
    public enum GameState{
        Paused,
        Playing,
        GameOver
    };
    private static State instance;
    private GameState gameState = GameState.Playing;

    void Awake()
    {
        if(!instance)instance = this;
    }
    public static State GetInstance(){
        return instance;
    }
    public GameState GetGameState(){
        return gameState;
    }

    private void ChangeGameState(GameState newState){
        gameState = newState;
        OnGameStateChanged();
    }

    public delegate void StateChanged();
    public event StateChanged GameStateChanged;
    private void OnGameStateChanged(){
        if(GameStateChanged != null){
            GameStateChanged?.Invoke();
        }
    }

    public void PauseGame(){
        ChangeGameState(GameState.Paused);
    }

    public void UnPauseGame(){
        ChangeGameState(GameState.Playing);
    }

    public void GameOver(){
        ChangeGameState(GameState.GameOver);
    }
}
