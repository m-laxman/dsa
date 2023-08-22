// Stack class.
class Stack
{
private:
    int *arr;
    int top_st;
    int size;

public:
    Stack(int capacity)
    {
        // Write your code here.
        size = capacity;
        top_st = -1;
        arr = new int[capacity];
    }

    void push(int num)
    {
        // Write your code here.
        if (!isFull())
            arr[++top_st] = num;
    }

    int pop()
    {
        // Write your code here.
        if (!isEmpty())
            return arr[top_st--];
        else
            return -1;
    }

    int top()
    {
        // Write your code here.
        if (!isEmpty())
            return arr[top_st];
        else
            return -1;
    }

    int isEmpty()
    {
        // Write your code here.
        if (top_st == -1)
            return 1;
        else
            return 0;
    }

    int isFull()
    {
        // Write your code here.
        if (top_st + 1 == size)
            return 1;
        else
            return 0;
    }
};
