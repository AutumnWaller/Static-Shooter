using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmmoButton : PurchaseableButton
{
    Weapon playerWeapon;
    public TMPro.TextMeshProUGUI costText;

    private void Start()
    {
        playerWeapon = GameManager.GetInstance().player.weapon;
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
        if (Scoring.money >= price)
        {
            Scoring.money -= price;
            playerWeapon.ammo += 50;
            timesPurchased++;
        }
    }
}
