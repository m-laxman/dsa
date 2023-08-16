/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *removeKthNode(Node *head, int k)
{
    // Write your code here.
    Node *prev, *next, *t = head;
    int cnt = 0;
    while (t)
    {
        t = t->next;
        cnt++;
    }
    if (cnt == k)
    {
        t = head->next;
        delete head;
        return t;
    }
    else if (k == 1)
    {
        t = head;
        while (t->next)
        {
            prev = t;
            t = t->next;
        }
        prev->next = NULL;
        delete t;
        return head;
    }
    else
    {
        t = head;
        int i = cnt - k;
        while (t->next && i > 0)
        {
            prev = t;
            next = t->next;
            t = t->next;
            i--;
        }
        prev->next = next->next;
        delete next;
        return head;
    }
}
