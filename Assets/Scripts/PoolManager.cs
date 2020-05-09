using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    private static PoolManager instance;
    private GameManager gmInstance;
    public List<GameObject> enemies;

    void Awake(){
        if(!instance) instance = this;
        enemies = new List<GameObject>();
    }

    void Start(){
        gmInstance = GameManager.GetInstance();
    }
    public static PoolManager GetInstance(){
        return instance;
    }
    public void CreateEnemyPool(GameObject obj, int amount){
        State stateReference = State.GetInstance();
        for(int i = 0; i < amount; i++){
            GameObject clone = Instantiate(obj, Vector3.zero, Quaternion.identity);
            clone.SetActive(false);
            EnemyNavigation nav = clone.AddComponent<EnemyNavigation>();
            nav.playerTransform = gmInstance.player.transform;
            nav.stateReference = stateReference;
            clone.name = $"Enemy {i + 1}";
            enemies.Add(clone);
        }
    }
    int a = 0;
    public GameObject GetEnemyFromPool(){
        foreach(GameObject obj in enemies){
            if(!obj.activeInHierarchy)
                return obj;
        }
        a = 5;
        return null;
    }

}
