#include <bits/stdc++.h>
/****************************************************************
    Following is the Linked List node structure

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

Node *insertionSortLL(Node *head)
{
    // Write your code here.
    Node *i = new Node(0);
    while (head)
    {
        Node *next = head->next;
        Node *t = i;
        while (t->next && t->next->data < head->data)
        {
            t = t->next;
        }
        head->next = t->next;
        t->next = head;
        head = next;
    }
    return i->next;
}
