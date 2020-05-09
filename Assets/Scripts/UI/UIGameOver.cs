using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class UIGameOver : UIBase
{

    protected override void Awake(){
        base.Awake();
    }
    protected override void Start(){
        base.Start();
    }

    protected override void Update(){
        base.Update();
    }
    public void Quit(){
        Application.Quit();
    }

    public void Retry(){
        stateReference.UnPauseGame();
        SceneManager.LoadScene(0, LoadSceneMode.Single);
    }
}
