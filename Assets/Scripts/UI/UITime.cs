using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UITime : UIBase
{
    
    public TMPro.TextMeshProUGUI timerText;
    
    private float timer = 10;


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
        StartCoroutine(Countdown());
    }

    protected override void Update()
    {
        base.Update();
    }

    private IEnumerator Countdown()
    {
        while(timer > 0)
        {
            SetText();
            yield return new WaitForSeconds(1);
            timer -= 1;
        }
        timer = 10;
    }

    void SetText()
    {
        timerText.text = timer.ToString("0");
    }

}
