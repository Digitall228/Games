using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

    public LevelContainer level;
    public Queue<GameObject> Enemies;
    public Transform _transform;
    public bool enemyBorder = false;
    private float borderX;
    private float borderY;

    public void Start()
    {
        _transform = transform;
        Initialize();
        StartCoroutine(Spawn());
    }
    public Spawner(LevelContainer Level, Transform ParentTransform)
    {
        level = Level;
        _transform = ParentTransform;
        Initialize();
    }
    public void Initialize()
    {
        //_transform = transform;
        Enemies = new Queue<GameObject>();
        if (!enemyBorder)
        {
            borderX = Camera.main.aspect * Camera.main.orthographicSize;
            borderY = Camera.main.aspect * Camera.main.orthographicSize;
        }
        else
        {
            borderX = transform.GetComponent<SpriteRenderer>().bounds.size.x;
            borderY = transform.GetComponent<SpriteRenderer>().bounds.size.y;
        }
        for (int x = 0; x < level.Enemies.Length; x++)
        {
            for (int y = 0; y < level.Enemies[x].count; y++)
            {
                GameObject obj = Instantiate(level.Enemies[x].enemy.gameObject);
                obj.SetActive(false);
                Enemies.Enqueue(obj);
            }
        }
        GameController.countEnemies = Enemies.Count;
    }
    public IEnumerator Spawn()
    {
        for(int i = 0; i < level.Enemies.Length; i++)
        {
            for (int j = 0; j < level.Enemies[i].count; j++)
            {
                float xPos = Random.Range(-borderX, borderX);
                float yPos = borderY/1.7f;
                GameObject enemy = Enemies.Dequeue();
                if(enemy.GetComponents<Bullet>().Length > 0)
                { }
                enemy.transform.position = new Vector3(_transform.position.x + xPos, _transform.position.y);
                enemy.SetActive(true);
                yield return new WaitForSeconds(level.Enemies[i].delay);
            }
        }
    }
}