using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIAmmo : UIBase
{
    public TMPro.TextMeshProUGUI ammoText;
    Weapon playerWeapon;

    protected override void Awake(){
        base.Awake();
    }

    protected override void Start(){
        base.Start();
        playerWeapon = gmInstance.player.weapon;
    }
    protected override void Update(){
        base.Update();
        ammoText.text = $"{playerWeapon.ammo.ToString()} Ammo";
    }
    
}
