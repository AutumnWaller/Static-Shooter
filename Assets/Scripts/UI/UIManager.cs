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
        OpenWindow(inGameUI);
        CanPause(true);
    }

    private bool changeUI = true;
    
    public void ChangeUI(){
        changeUI = true;
    }

    public void CanPause(bool pause){
        canPause = pause;
    }

    public bool GetCanPause(){
        return canPause;
    }
    void Update()
    {
        //TODO: Make the timer appear when the round finishes.
        //TODO: Make a buy menu for ammo and upgrades.
        if(changeUI){
            changeUI = false;
            if(GameManager.GetGameState() == GameManager.GameState.GameOver){
                OpenWindow(gameOverUI);
            }else if(GameManager.GetGameState() == GameManager.GameState.Paused){
                OpenWindow(pauseUI);
            }else if(GameManager.GetGameState() == GameManager.GameState.Playing){
                OpenWindow(inGameUI);
            }
        }
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
