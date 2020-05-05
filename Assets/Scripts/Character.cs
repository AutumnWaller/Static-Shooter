using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    public int health = 100;
    public interface OnTakeDamage{
        public void TakeDamage();
    }
}
