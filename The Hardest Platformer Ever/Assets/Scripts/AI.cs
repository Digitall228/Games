using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using System;

public abstract class AI :  Character
{
    public Walker walker;

    public float waitTime;
    public float maxSpeed;

    public Transform target;
    public float visibleDistance;
    public float attackDistance;
    public float recommendDistance;
    public bool isFirstAnim = false;

    public Weapon weapon;

    protected Rigidbody2D rb;

    public delegate void ComeUp();
    public ComeUp comeUp;
    public delegate void Compute(float distance);
    public Compute think;
    public delegate void Attack();
    public Attack attack;

    public Coroutine routine;

    public new virtual void Start()
    {
        base.Start();

        target = FindObjectOfType<Player>().transform;
        rb = GetComponent<Rigidbody2D>();
        walker.SetPlayer(maxSpeed, jumpForce, rb);
        walker.onWalkCompleted = OnWalkCompleted;

        if (weapon is Gun gun)
        {
            gun.onRecharge = OnRecharge;
            gun.data.gunParent = this;
        }

        routine = StartCoroutine(Animation());
        StartCoroutine(Logic());

        think = Think;
        attack = Act;
    }

    public virtual void Sense()
    {
        float distance = Vector2.Distance(target.transform.position, transform.position);
        if(distance < visibleDistance)
        {
            if (routine != null)
            {
                StopCoroutine(routine);
                routine = null;
            }
            think?.Invoke(distance);
        }
        else
        {
            if (routine == null)
            {
                routine = StartCoroutine(Animation());
            }
        }
    }   
    public virtual void Think(float distance)
    {
        if(distance > recommendDistance)
        {
            comeUp?.Invoke();
        }
        if (distance > attackDistance)
            return;

        //transform.eulerAngles = target.transform.position.x > transform.position.x ? new Vector3() : new Vector3(0, 0, 180);
        transform.localScale = target.transform.position.x > transform.position.x ? new Vector3(1, 1) : new Vector3(-1, 1);

        RaycastHit2D[] hits = new RaycastHit2D[2];
        Debug.DrawRay(transform.position, (target.position - transform.position), Color.red);
        Physics2D.Raycast(transform.position, (target.position - transform.position), new ContactFilter2D(), hits, weapon.data.range);
        if (hits.Length > 1)
        {
            if (hits[1].transform != null && hits[1].transform.TryGetComponent(out Player player))
            {
                attack?.Invoke();
            }
        }
    }

    public virtual void Act()
    {
        weapon.Shoot(target.transform, transform);
        isFirstAnim = true;
    }
    public virtual IEnumerator Animation()
    {
        while (true)
        {
            if(Anim())
            {
                yield return new WaitForSeconds(waitTime);
            }
            yield return new WaitForEndOfFrame();
        }
    }
    public abstract bool Anim();
    public IEnumerator Logic()
    {
        while (true)
        {
            Sense();
            yield return new WaitForSeconds(0.04f);
        }
    }
    public void Jump()
    {
        rb.velocity = new Vector2(0, jumpForce);
    }
    public virtual void OnWalkCompleted()
    {
        if (routine == null)
        {
            routine = StartCoroutine(Animation());
        }
    }
    private void OnRecharge()
    {
        Gun gun = (Gun)weapon;
        StartCoroutine(gun.ReCharge(gun.bulletInHolder));
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.DrawWireSphere(transform.position, visibleDistance);
        Gizmos.DrawWireSphere(transform.position, recommendDistance);
    }
}
