using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmmoButton : PurchaseableButton
{
    Weapon playerWeapon;

    private void Start()
    {
        playerWeapon = GameManager.GetInstance().player.weapon;
    }

    public void Buy()
    {
        if (Scoring.score >= price)
        {
            playerWeapon.ammo += 50;
            timesPurchased++;
        }
    }
}
