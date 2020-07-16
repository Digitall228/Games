using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroBullet : MonoBehaviour {

    public int hp;
    public int damage;
    public int speed;
    public int kX = 0, kY = 0;	

    void Start()
    {
        hp = damage;
        Destroy(gameObject, 3);
    }
	void Update () {
        transform.Translate(Vector3.up * speed * Time.deltaTime * kY);
        transform.Translate(Vector3.right * speed * Time.deltaTime * kX);

    }

    public void ChangeDirection(int _kX, int _kY)
    {
        kX = _kX;
        kY = _kY;
    }

}
