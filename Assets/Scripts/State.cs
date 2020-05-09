using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class State
{
    public enum GameState{
        Paused,
        Playing,
        GameOver
    };
    private static GameState gameState = GameState.Playing;
    public static GameState GetGameState(){
        return gameState;
    }

    public static void ChangeGameState(GameState newState){
        gameState = newState;
        OnGameStateChanged();
        // Change to event uiManagerInstance.ChangeUI();
    }

    public delegate void StateChanged();
    public static event StateChanged GameStateChanged;
    static void OnGameStateChanged(){
        if(GameStateChanged != null){
            GameStateChanged?.Invoke();
        }
    }

    public static void PauseGame(){
        ChangeGameState(GameState.Paused);
    }

    public static void UnPauseGame(){
        ChangeGameState(GameState.Playing);
    }
}
