using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class UIGameOver : UIBase
{
    public void Quit(){
        Application.Quit();
    }

    public void Retry(){
        SceneManager.LoadScene(0, LoadSceneMode.Single);
    }
}
