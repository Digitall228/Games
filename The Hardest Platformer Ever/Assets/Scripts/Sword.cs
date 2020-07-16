using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Sword : Weapon
{
    public Transform hitPoint;
    public Animator animator;

    public void Start()
    {
        animator = GetComponent<Animator>();
        sprite = GetComponent<Image>().sprite;
    }
    public void OnEnable()
    {
        if (animator == null)
            return;

        animator.SetFloat("speed", data.bulletSpeed);
    }

    public override void Shoot(Vector2 target, Vector2 character)
    {
        if (canShoot)
        {
            canShoot = false;

            animator.SetTrigger("Attack");

            Physics2D.OverlapCircleAll(hitPoint.position, data.range);

            StartCoroutine(ResetDelay());
        }
    }
    private void OnDrawGizmosSelected()
    {
        Gizmos.DrawWireSphere(hitPoint.position, data.range);
    }
}
