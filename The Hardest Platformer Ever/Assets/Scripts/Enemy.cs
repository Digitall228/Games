using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy :  AI
{
    float distance;
    public Vector2 startPosition;

    public Transform[] waypoints;
    public int nextWaypoint = 0;
    public int iterator = 1;

    public override void Start()
    {
        base.Start();

        startPosition = waypoints[0].position;
        walker.GeneratePath(waypoints[nextWaypoint]);
        comeUp = WalkUp;
    }

    public override bool Anim()
    {

        if (startPosition.y < waypoints[nextWaypoint].position.y && ((rb.velocity.y <= 0.01f) && rb.velocity.y >= -0.01f))
        {
            Jump();
        }

        float step = speed * Time.deltaTime; // calculate distance to move
        transform.position = Vector3.MoveTowards(transform.position, waypoints[nextWaypoint].position, step);
        if (Vector2.Distance(transform.position, waypoints[nextWaypoint].position) < 0.1f)
        {
            startPosition = waypoints[nextWaypoint].position;
            if (waypoints.Length <= nextWaypoint+1)
            {
                iterator = -1;
                transform.localScale = new Vector3(-1,1,1);
                nextWaypoint += iterator;
                return true;
            }
            else if (nextWaypoint <= 0)
            {
                iterator = 1;
                transform.localScale = new Vector3(1,1,1);
                nextWaypoint += iterator;
                return true;
            }

            nextWaypoint += iterator;
        }
        return false;
    }
    public void WalkUp()
    {
        int k = transform.position.x > target.position.x ? -1 : 1;
        transform.position = Vector2.MoveTowards(transform.position, new Vector2(target.position.x + visibleDistance * k, transform.position.y), speed * Time.deltaTime);
        startPosition = transform.position;
    }
    public override IEnumerator Animation()
    {
        if (isFirstAnim)
        {
            isFirstAnim = false;

            transform.localScale = waypoints[nextWaypoint].position.x > transform.position.x ? new Vector3(1, 1) : new Vector3(-1, 1);
            walker.GeneratePath(waypoints[nextWaypoint]);

            yield break;
        }

        yield return base.Animation();
    }
    public override void OnWalkCompleted()
    {
        base.OnWalkCompleted();
    }
}
