#include <bits/stdc++.h>
void reverse(queue<int> &q)
{
    if (q.empty())
        return;
    int ele = q.front();
    q.pop();
    reverse(q);
    q.push(ele);
}
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    reverse(q);
    return q;
}
