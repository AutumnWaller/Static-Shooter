using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
public class EnemyNavigation : MonoBehaviour
{
    NavMeshAgent agent;
    public Transform playerTransform;
    public State stateReference;
    void OnEnable()
    {
        agent = GetComponent<NavMeshAgent>();
        agent.destination = playerTransform.position;
        stateReference.GameStateChanged += ChangeBehaviour;
    }

    void ChangeBehaviour(){
        if(stateReference.GetGameState() == State.GameState.Playing){
            agent.enabled = true;
            agent.destination = playerTransform.position;
        }else if(stateReference.GetGameState() == State.GameState.GameOver){
            stateReference.GameStateChanged -= ChangeBehaviour;
            agent.enabled = false;
        }else{
            agent.enabled = false;   
        }
    }
}
