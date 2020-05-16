using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthButton : PurchaseableButton
{
    Player player;
    public TMPro.TextMeshProUGUI costText;

    private void Start()
    {
        player = GameManager.GetInstance().player;
    }
    private void OnEnable()
    {
        UpdatePrice();
    }

    public void UpdatePrice()
    {
        costText.text = price.ToString();
    }

    public void Buy()
    {
        if (Scoring.score >= price)
        {
            if (player.health == 100)
                return;
            player.health += 50;
            Scoring.score -= price;
            timesPurchased++;
        }
    }
}
