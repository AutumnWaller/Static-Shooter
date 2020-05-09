using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public GameObject inGameUI, pauseUI, gameOverUI;
    public Queue<GameObject> activeUI;
    private static UIManager instance;
    private bool canPause = true;

    public static UIManager GetInstance(){
        return instance;
    }

    void Awake()
    {
        instance = this;
    }
    void Start()
    {
        activeUI = new Queue<GameObject>();
        State.GameStateChanged += ChangeUI;
        OpenWindow(inGameUI);
        CanPause(true);
    }
    public void ChangeUI(){
        if(State.GetGameState() == State.GameState.GameOver){
            OpenWindow(gameOverUI);
        }else if(State.GetGameState() == State.GameState.Paused){
            OpenWindow(pauseUI);
        }else if(State.GetGameState() == State.GameState.Playing){
            OpenWindow(inGameUI);
        }
    }

    public void CanPause(bool pause){
        canPause = pause;
    }

    public bool GetCanPause(){
        return canPause;
    }

    public void OpenWindow(GameObject ui){
        GameObject newUI = Instantiate(ui, transform);
        newUI.SetActive(true);
        if(activeUI.Count > 0){
            CloseWindow();
        }
        activeUI.Enqueue(newUI);
    }

    public void CloseWindow(){
        Destroy(activeUI.Dequeue());
    }

}
