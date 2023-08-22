#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
private:
    Node *front_q;
    Node *rear_q;

public:
    Queue()
    {
        // Implement the Constructor
        front_q = NULL;
        rear_q = NULL;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (front_q)
            return 0;
        else
            return 1;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        Node *t = new Node(data);
        if (front_q)
        {
            rear_q->next = t;
            rear_q = t;
        }
        else
        {
            front_q = t;
            rear_q = t;
        }
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (front_q)
        {
            Node *t = front_q;
            int data = t->data;
            front_q = front_q->next;
            delete (t);
            return data;
        }
        else
            return -1;
    }

    int front()
    {
        // Implement the front_q() function
        if (front_q)
            return front_q->data;
        else
            return -1;
    }
};