using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class UIBase : MonoBehaviour
{
    protected GameManager gmInstance;
    protected State stateReference;


    protected virtual void Awake()
    {
    }

    protected virtual void Start()
    {
        gmInstance = GameManager.GetInstance();
        stateReference = State.GetInstance();
    }
    protected virtual void Update(){
    }
}
