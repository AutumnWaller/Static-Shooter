using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UI : MonoBehaviour
{
    private UI instance;

    protected virtual void Awake()
    {
        instance = this;
    }
}
