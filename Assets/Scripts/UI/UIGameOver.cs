using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class UIGameOver : UIBase
{
    public TMPro.TextMeshProUGUI wavesSurvivedScoreText, enemiesKilledScoreText, coinsEarnedScoreText, totalScoreText;
    public TMPro.TextMeshProUGUI wavesSurvivedAmountText, enemiesKilledAmountText, coinsEarnedAmountText;

    private void OnEnable()
    {
        Scoring scoring = Scoring.GetInstance();
        int wavesSurvivedAmount = scoring.GetWavesSurvived();
        int enemiesKilledAmount = scoring.GetKills();
        int coinsEarnedAmount = scoring.GetTotalMoney();

        wavesSurvivedAmountText.text = wavesSurvivedAmount.ToString();
        enemiesKilledAmountText.text = enemiesKilledAmount.ToString();
        coinsEarnedAmountText.text = coinsEarnedAmount.ToString();

        int wavesSurvivedScore = wavesSurvivedAmount * 12000;
        int killsScore = enemiesKilledAmount * 50;
        int coinsScore = coinsEarnedAmount * 10;
        int totalScore = wavesSurvivedScore + killsScore + coinsScore;

        wavesSurvivedScoreText.text = wavesSurvivedScore.ToString();
        enemiesKilledScoreText.text = killsScore.ToString();
        coinsEarnedScoreText.text = coinsScore.ToString();
        totalScoreText.text = totalScore.ToString();
    }
    protected override void Awake(){
        base.Awake();
    }
    protected override void Start(){
        base.Start();
    }

    protected override void Update(){
        base.Update();
    }
    public void Quit(){
        Application.Quit();
    }

    public void Retry(){
        stateReference.UnPauseGame();
        SceneManager.LoadScene(1, LoadSceneMode.Single);
    }
}
