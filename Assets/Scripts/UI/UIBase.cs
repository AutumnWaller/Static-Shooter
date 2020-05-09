using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class UIBase : MonoBehaviour
{
    private UIBase instance;
    protected GameManager gmInstance;
    protected State stateReference;


    protected virtual void Awake()
    {
        if(!instance)instance = this;
    }

    protected virtual void Start()
    {
        gmInstance = GameManager.GetInstance();
        stateReference = State.GetInstance();
    }
    protected virtual void Update(){
    }
    
}
