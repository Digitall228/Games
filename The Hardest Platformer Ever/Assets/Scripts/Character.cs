using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class Character : MonoBehaviour
{
    public int maxHealth;
    public float health;
    public float speed;
    public float jumpForce;


    public Slider healthBar;

    public virtual void Start()
    {
        health = maxHealth;
        healthBar.maxValue = maxHealth;
        healthBar.value = health;
    }
    public void TakeDamage(float damage)
    {
        health -= damage;
        healthBar.value = health;

        if (health == 0)
        {
            Destroy(gameObject);
        }
    }
}
