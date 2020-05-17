using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class UIPause : UIBase
{

    protected override void Awake()
    {
        base.Awake();
    }
    protected override void Start()
    {
        base.Start();
    }

    protected override void Update()
    {
        base.Update();
    }
    public void Resume()
    {
        stateReference.UnPauseGame();
    }

    public void Quit()
    {
        Application.Quit();
    }

    public void Retry()
    {
        stateReference.UnPauseGame();
        SceneManager.LoadScene(1, LoadSceneMode.Single);
    }
}
