#include <bits/stdc++.h>
class Queue
{
    // Stacks to be used in the operations.
    stack<int> st1, st2;

public:
    // Enqueues 'X' into the queue. Returns true after enqueuing.
    bool enqueue(int X)
    {
        // Write your code here.
        st1.push(X);
        return true;
    }

    /*
      Dequeues top element from queue. Returns -1 if the queue is empty,
      otherwise returns the popped element.
    */
    int dequeue()
    {
        // Write your code here.
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        int front = -1;
        if (!st2.empty())
        {
            front = st2.top();
            st2.pop();
        }
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return front;
    }
};