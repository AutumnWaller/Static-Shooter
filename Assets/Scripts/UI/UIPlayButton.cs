﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIPlayButton : MonoBehaviour
{
    public void Click()
    {
        State.GetInstance().UnPauseGame();
    }
}
