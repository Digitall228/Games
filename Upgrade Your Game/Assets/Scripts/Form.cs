using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Form : MonoBehaviour
{
    public Sprite[] sprites;
    public int[] cost;
    public int nextLevel;

    public void Start()
    {
        DontDestroyOnLoad(gameObject);
    }
}
