using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncreasedKnockbackButton : PurchaseableButton
{
    Weapon playerWeapon;

    public float[] newKnockbackModifier;

    private void Start()
    {
        playerWeapon = GameManager.GetInstance().player.weapon;
    }
    public void Buy()
    {
        if (timesPurchased < maxPurchaseable)
        {
            if (prices[timesPurchased] <= Scoring.score)
            {
                Scoring.score -= prices[timesPurchased];
                timesPurchased++;
                playerWeapon.knockbackModifier = newKnockbackModifier[timesPurchased];
            }
        }
    }
}
