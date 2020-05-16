using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIHealthCounter : MonoBehaviour
{
    public Player playerReference;
    public TMPro.TextMeshProUGUI costText;
    private void OnEnable()
    {
        costText.text = playerReference.health.ToString();
    }
}
