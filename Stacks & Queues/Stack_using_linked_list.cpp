/****************************************************************

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


*****************************************************************/

class Stack
{
    // Write your code here
private:
    Node *top;

public:
    Stack()
    {
        // Write your code here
        top = NULL;
    }

    int getSize()
    {
        // Write your code here
        int cnt = 0;
        Node *t = top;
        while (t)
        {
            t = t->next;
            cnt++;
        }
        return cnt;
    }

    bool isEmpty()
    {
        // Write your code here
        if (top)
            return 0;
        else
            return 1;
    }

    void push(int data)
    {
        // Write your code here
        Node *t = new Node(data);
        t->next = top;
        top = t;
    }

    void pop()
    {
        // Write your code here
        if (top)
        {
            Node *t = top;
            top = top->next;
            delete (t);
        }
    }

    int getTop()
    {
        // Write your code here
        if (top)
            return top->data;
        else
            return -1;
    }
};