using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class UIHealth : UIBase
{
    public Damageable character;
    public Slider slider;
    
    protected override void Awake(){
        base.Awake();
    }
    protected override void Start()
    {
        base.Start();
        character = gmInstance.player;
    }
    protected override void Update()
    {
        base.Update();
        slider.value = (float)(character.health / 100.0f);
    }

}
