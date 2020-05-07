using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIMoney : UIBase
{
    public TMPro.TextMeshProUGUI moneyText;

    protected override void Update()
    {
        base.Update();
        moneyText.text = Scoring.score.ToString();
    }
}
