using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class UIBase : MonoBehaviour
{
    private UIBase instance;
    protected GameManager gmInstance;


    protected virtual void Awake()
    {
        instance = this;
        gmInstance = GameManager.GetInstance();
    }

    protected virtual void Update(){
    }
    
}
