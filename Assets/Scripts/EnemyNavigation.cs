using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
public class EnemyNavigation : MonoBehaviour
{
    NavMeshAgent agent;
    public Transform playerTransform;
    public State stateReference;
    private void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
    }

    private void OnEnable()
    {
        agent.destination = playerTransform.position;
        stateReference.GameStateChanged += OnGameStateChanged;
    }

    private void OnGameStateChanged(){
        if(stateReference.GetGameState() == State.GameState.Playing){
            agent.enabled = true;
            agent.destination = playerTransform.position;
        }
    }

    private void OnDisable()
    {
        stateReference.GameStateChanged -= OnGameStateChanged;
    }
}
