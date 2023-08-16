/*************************************************

    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

Node *removeLoop(Node *head)
{
    // Write your code here.
    Node *slow = head, *fast = head, *intersect = head;
    int cnt = 0;

    while (fast && fast->next)
    {
        slow = slow->next;
        cnt++;
        fast = fast->next->next;
        if (slow == fast)
        {
            intersect = slow;
            //    cout<<"tt"<<intersect->data<<"TT";
            break;
        }
    }
    if (fast == NULL)
        return head;
    slow = head;
    while (slow != intersect)
    {
        slow = slow->next;
        intersect = intersect->next;
    }
    while (slow->next != intersect)
    {
        slow = slow->next;
    }
    slow->next = NULL;
    return head;
}