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

Node *pairsSwap(Node *head)
{
    //  Write your code here.
    Node *t = head, *prev, *next;
    if (t == NULL || t->next == NULL)
        return head;
    while (t->next)
    {
        prev = t;
        next = t->next;

        swap(prev->data, next->data);

        if (t->next->next)
            t = t->next->next;
        else
            t = t->next;
    }
    return head;
}