#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/

Node *addNodes(Node *head, int n, int m)
{
    // Write your code here.
    int i = 0;
    Node *t = head, *prev = NULL;
    while (t)
    {
        i++;
        if (i == m)
        {
            int j = 0, sum = 0;
            if (t->next)
                t = t->next;
            while (t && j < n)
            {
                sum += t->data;
                prev = t;
                t = t->next;
                j++;
            }
            Node *newN = new Node(sum);
            newN->next = prev->next;
            prev->next = newN;
            t = newN;
            j = 0;
            i = 0;
        }
        t = t->next;
    }
    return head;
}