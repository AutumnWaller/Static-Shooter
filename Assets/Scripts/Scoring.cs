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
    public static int money, totalEarnedMoney;
    private int kills, wavesSurvived;
    private GameManager gmInstance;
    void Awake()
    {
        if(!instance) instance = this;
        money = 0;
    }

    void Start()
    {
        gmInstance = GameManager.GetInstance();
    }
    public static Scoring GetInstance(){
        return instance;
    }
    int DistanceScore(Vector3 enemyPos){
        float dist = enemyPos.magnitude - gmInstance.player.transform.position.magnitude;
        int distanceScore;
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
        int distScore = DistanceScore(enemyPos);
        money += distScore;
        totalEarnedMoney += distScore;
        
    }
    public void EnemyKill(){
        money += 10;
        totalEarnedMoney += 10;
        kills++;
    }

    public void SurvivedWave()
    {
        wavesSurvived++;
    }

    public int GetWavesSurvived()
    {
        return wavesSurvived;
    }

    public int GetMoney()
    {
        return money;
    }

    public int GetTotalMoney()
    {
        return totalEarnedMoney;
    }

    public int GetKills()
    {
        return kills;
    }

}
