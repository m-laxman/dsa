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

Node *segregateOddEven(Node *head)
{
    // Write your code here.
    Node *evenHead = new Node(0), *oddHead = new Node(0);
    Node *evenTail = evenHead, *oddTail = oddHead;

    Node *cur = head;
    while (cur)
    {
        Node *t = cur;
        if (cur->data % 2 == 0)
        {
            cur = cur->next;
            evenTail->next = t;
            t->next = NULL;
            evenTail = t;
        }
        else
        {
            cur = cur->next;
            oddTail->next = t;
            t->next = NULL;
            oddTail = t;
        }
    }
    oddTail->next = evenHead->next;
    return oddHead->next;
}
