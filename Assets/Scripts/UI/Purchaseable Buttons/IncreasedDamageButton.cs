using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncreasedDamageButton : PurchaseableButton
{
    Weapon playerWeapon;

    public int[] newDamage;

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
                playerWeapon.damagePerShot = newDamage[timesPurchased];
            }
        }
    }


}
