using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class UIWaveInfo : UIBase
{

    public TMPro.TextMeshProUGUI waveNumberText, enemyAmountText;
    public Slider enemySlider;
    protected override void Awake(){
        base.Awake();
    }

    protected override void Start(){
        base.Start();
    }
    protected override void Update(){
        base.Update();
        waveNumberText.text = $"Wave {gmInstance.wave}";
        enemyAmountText.text = $"{gmInstance.enemiesLeftThisWave} Left";
        if(gmInstance.totalEnemiesThisWave == 0)
            return;
        enemySlider.value = ((float)gmInstance.enemiesLeftThisWave / (float)gmInstance.totalEnemiesThisWave);
    }
}
