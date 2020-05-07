using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class UIBase : MonoBehaviour
{
    private UIBase instance;

    protected virtual void Awake()
    {
        instance = this;
    }

    protected virtual void Update(){
    }
    
}
