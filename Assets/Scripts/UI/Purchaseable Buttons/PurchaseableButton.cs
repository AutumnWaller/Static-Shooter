using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class PurchaseableButton : MonoBehaviour
{
    public int price = 0;
    public int maxPurchaseable = 0; //0 means infinite
    public int[] prices;
    protected int timesPurchased = 0;
}
