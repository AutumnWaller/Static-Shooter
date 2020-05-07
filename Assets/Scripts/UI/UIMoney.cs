using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIMoney : UI
{
    public TMPro.TextMeshProUGUI moneyText;

    void Update()
    {
        moneyText.text = Scoring.score.ToString();
    }
}
