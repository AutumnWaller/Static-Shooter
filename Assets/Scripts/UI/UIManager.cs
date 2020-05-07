using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public List<GameObject> UIPrefabs;
    public Queue<GameObject> activeUI;
    private UIManager instance;

    void Start()
    {
        activeUI = new Queue<GameObject>();
        OpenWindow(UIPrefabs[0]);
    }

    void Update()
    {
        //TODO: Make the timer appear when the round finishes.
        //TODO: Make a buy menu for ammo and upgrades.
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            CloseWindow();
        }
    }
    public void OpenWindow(GameObject ui){
        GameObject newUI = Instantiate(ui, transform);
        newUI.SetActive(true);
        if(activeUI.Count > 0){
            CloseWindow();
        }
        activeUI.Enqueue(newUI);
    }

    public void CloseWindow(){
        Destroy(activeUI.Dequeue());
    }

}
