using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
public class EnemyNavigation : MonoBehaviour
{
    NavMeshAgent agent;
    public Transform playerTransform;
    void OnEnable()
    {
        agent = GetComponent<NavMeshAgent>();
        agent.destination = playerTransform.position;
    }

    void Update()
    {
        if(GameManager.GetGameState() != GameManager.GameState.Playing){
            agent.enabled = false;
        }else{
            agent.enabled = true;
            agent.destination = playerTransform.position;
        }
    }
}
