using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity;
public class Scoring : MonoBehaviour
{
    public TMPro.TextMeshProUGUI scoreText;
    public float distFar = 20;
    public float distMed = 15;
    public float distClose = 10;
    static Scoring instance;
    float score;
    void Awake()
    {
        instance = this;
    }

    void Update()
    {   
        scoreText.text = score.ToString();
    }
    public static Scoring GetInstance(){
        return instance;
    }
    float DistanceScore(Vector3 enemyPos){
        float dist = enemyPos.magnitude - Player.GetPlayerTransform().position.magnitude;
        float distanceScore;
        if(dist >= distFar){
            distanceScore = 1;
        }else if(dist >= distMed){
            distanceScore = 2;
        }else if(dist >= distClose){
            distanceScore = 3;
        }else{
            distanceScore = 5;
        }
        return distanceScore;
    }
    public void EnemyHit(Vector3 enemyPos){
        score += DistanceScore(enemyPos);
    }
    public void EnemyKill(){
        score += 10;
    }

}
