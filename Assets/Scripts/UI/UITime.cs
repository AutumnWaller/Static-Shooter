using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UITime : UIBase
{

    public TMPro.TextMeshProUGUI timerText;
    float timer = 10;
    protected override void Awake()
    {
        base.Awake();
    }
    protected override void Update()
    {
        base.Update();
        if(gmInstance.GetWaveState() == GameManager.WaveState.Paused){
            timer -= Time.deltaTime;
            timerText.text = $"{timer.ToString("0.00")}";
            if(timer <= 0)
                timer = 0;
        }else{
            timer = 10;
            timerText.text = "";
        }
    }
}
