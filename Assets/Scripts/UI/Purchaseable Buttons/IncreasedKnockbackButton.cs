using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncreasedKnockbackButton : PurchaseableButton
{
    Weapon playerWeapon;

    public float[] newKnockbackModifier;

    public TMPro.TextMeshProUGUI costText;
    private void Start()
    {
        playerWeapon = GameManager.GetInstance().player.weapon;
    }

    private void OnEnable()
    {
        UpdateCost();
    }

    public void Buy()
    {
        if (timesPurchased < maxPurchaseable)
        {
            if (prices[timesPurchased] <= Scoring.money)
            {
                Scoring.money -= prices[timesPurchased];
                playerWeapon.knockbackModifier = newKnockbackModifier[timesPurchased];
                timesPurchased++;
                UpdateCost();
            }
        }
    }
    public void UpdateCost()
    {
        if (timesPurchased >= maxPurchaseable)
            costText.text = "Max";
        else
            costText.text = prices[timesPurchased].ToString();
    }
}
