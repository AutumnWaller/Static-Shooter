using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class UIHealth : UIBase
{
    public Character character;
    public Slider slider;
    
    protected override void Awake(){
        base.Awake();
    }
    void Start()
    {
        character = gmInstance.player;
    }
    protected override void Update()
    {
        base.Update();
        slider.value = character.health / 100;
    }

}
