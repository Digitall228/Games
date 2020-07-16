using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using System;

public class Walker : MonoBehaviour
{
    Path path;
    int currentWaypoint = 0;
    bool isEndReached = false;
    float nextWaypointDistance = 3.0f;

    float speed;
    float jumpForce;

    Seeker seeker;
    Rigidbody2D rb;

    public delegate void OnWalkCompleted();
    public OnWalkCompleted onWalkCompleted;

    public void SetPlayer(float Speed, float JumpForce, Rigidbody2D rigidbody2D)
    {
        speed = Speed;
        jumpForce = JumpForce;
        seeker = GetComponent<Seeker>();
        rb = rigidbody2D;
    }

    public void FixedUpdate()
    {
        if (path == null)
            return;
        if(currentWaypoint >= path.vectorPath.Count)
        {
            isEndReached = true;
            path = null;
            onWalkCompleted?.Invoke();
            return;
        }
        else
        {
            isEndReached = false;
        }

        Move();

        float distance = Vector2.Distance(rb.position, path.vectorPath[currentWaypoint]);

        if(distance < nextWaypointDistance)
        {
            currentWaypoint++;
        }
    }
    public void GeneratePath(Transform endPoint)
    {
        seeker.StartPath(rb.position, endPoint.position, OnPathComplete);
        print(speed);
    }

    private void OnPathComplete(Path p)
    {
        if(!p.error)
        {
            path = p;
            currentWaypoint = 0;
        }
    }
    public void Move()
    {
        Vector2 direction = new Vector2(path.vectorPath[currentWaypoint].x - rb.position.x, 0).normalized;
        Vector2 force = direction * speed * Time.deltaTime / 10;

        rb.AddForce(force);
    }
    public void Jump()
    {
        rb.velocity = new Vector2(rb.velocity.x, jumpForce);
    }
}
