using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity;
public class Scoring : MonoBehaviour
{
    public float distFar = 20;
    public float distMid = 15;
    public float distClose = 10;
    static Scoring instance;
    [System.NonSerialized]
    public static float score;
    private GameManager gmInstance;
    void Awake()
    {
        if(!instance) instance = this;
        score = 150000;
    }

    void Start()
    {
        gmInstance = GameManager.GetInstance();
    }
    public static Scoring GetInstance(){
        return instance;
    }
    float DistanceScore(Vector3 enemyPos){
        float dist = enemyPos.magnitude - gmInstance.player.transform.position.magnitude;
        float distanceScore;
        if(dist >= distFar){
            distanceScore = 5;
        }else if(dist >= distMid){
            distanceScore = 3;
        }else if(dist >= distClose){
            distanceScore = 2;
        }else{
            distanceScore = 1;
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
