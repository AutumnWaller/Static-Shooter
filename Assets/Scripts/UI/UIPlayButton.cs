using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class UIPlayButton : MonoBehaviour
{
    public void Click()
    {
        State.GetInstance().UnPauseGame();
    }
}
