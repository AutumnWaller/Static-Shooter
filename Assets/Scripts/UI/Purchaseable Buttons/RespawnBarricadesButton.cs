using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RespawnBarricadesButton : PurchaseableButton
{
    public DamageableBarricade barricade1, barricade2, barricade3;



    public void Buy()
    {
        if (barricade1.health == 100 && barricade2.health == 100 && barricade3.health == 100)
            return;
        if (Scoring.score >= price)
        {
            barricade1.health = 100;
            barricade2.health = 100;
            barricade3.health = 100;
            barricade1.gameObject.SetActive(true);
            barricade2.gameObject.SetActive(true);
            barricade3.gameObject.SetActive(true);
            Scoring.score -= price;
            timesPurchased++;
        }
    }
}
