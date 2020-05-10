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
    protected override void Start()
    {
        base.Start();
    }

    private void OnEnable()
    {
        if (!stateReference) stateReference = State.GetInstance();
    }

    protected override void Update()
    {
        base.Update();
        if (stateReference.GetWaveState() == State.WaveState.Paused)
        {
            timer -= Time.deltaTime;
            SetText();
            if (timer <= 0)
            {
                timer = 10;
            }
        }
    }

    void SetText()
    {
        timerText.text = timer.ToString("0");
    }

}
