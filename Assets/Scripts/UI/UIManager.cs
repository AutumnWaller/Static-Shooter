using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public GameObject inGameUI, pauseUI, gameOverUI, timerUI;
    public Queue<GameObject> activeUI;
    private static UIManager instance;
    private State stateReference;
    private bool canPause = true;

    public static UIManager GetInstance()
    {
        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;
    }
    void Start()
    {
        activeUI = new Queue<GameObject>();
        if (!stateReference) stateReference = State.GetInstance();
        stateReference.GameStateChanged += ChangeUI;
        stateReference.WaveStateChanged += ChangeUI;
        OpenWindow(inGameUI);
        CanPause(true);
    }

    public void ChangeUI()
    {
        Debug.Log("UI");
        if (stateReference.GetWaveState() == State.WaveState.Paused)
        {
            OpenWindow(timerUI);
            CanPause(false);
        }
        else if (stateReference.GetGameState() == State.GameState.GameOver)
        {
            OpenWindow(gameOverUI);
        }
        else if (stateReference.GetGameState() == State.GameState.Paused)
        {
            OpenWindow(pauseUI);
        }
        else if (stateReference.GetGameState() == State.GameState.Playing)
        {
            OpenWindow(inGameUI);
        }


    }

    public void CanPause(bool pause)
    {
        canPause = pause;
    }

    public bool GetCanPause()
    {
        return canPause;
    }

    public void OpenWindow(GameObject ui)
    {
        GameObject newUI = Instantiate(ui, transform);
        newUI.SetActive(true);
        if (activeUI.Count > 0)
        {
            CloseWindow();
        }
        activeUI.Enqueue(newUI);
    }

    public void CloseWindow()
    {
        Destroy(activeUI.Dequeue());
    }

}
