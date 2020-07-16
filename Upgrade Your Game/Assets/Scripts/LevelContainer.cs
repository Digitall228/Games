using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class LevelContainer {

    public EnemyContainer[] Enemies;
    public int reward;
}
[System.Serializable]
public class EnemyContainer
{
    public Enemy enemy;
    public int count;
    public float delay;
}
