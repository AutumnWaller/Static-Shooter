using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameObject infoScreen;
    public GameObject mainMenuScreen;
    public void PlayButton()
    {
        SceneManager.LoadScene(1);
    }

    public void ExitButton()
    {
        Application.Quit();
    }

    public void InformationButton()
    {
        mainMenuScreen.SetActive(false);
        infoScreen.SetActive(true);
    }

    public void HomeButton()
    {
        mainMenuScreen.SetActive(true);
        infoScreen.SetActive(false);
    }


}
