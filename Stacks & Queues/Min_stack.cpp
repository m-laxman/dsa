#include <bits/stdc++.h>
// Implement class for minStack.
class minStack
{
    // Write your code here.
    stack<int> st;
    int mini = INT_MAX;

public:
    // Constructor
    minStack()
    {
        // Write your code here.
    }

    // Function to add another element equal to num at the top of stack.
    void push(int num)
    {
        // Write your code here.
        if (st.empty())
        {
            st.push(num);
            mini = num;
        }
        else
        {
            if (num < mini)
            {
                st.push(2 * num - mini);
                mini = num;
            }
            else
                st.push(num);
        }
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        // Write your code here.
        if (!st.empty())
        {
            int t = st.top();
            int top1 = t;
            if (t < mini)
            {
                top1 = mini;
                mini = 2 * mini - t;
            }
            st.pop();
            return top1;
        }
        return -1;
    }

    // Function to return the top element of stack if it is present. Otherwise
    // return -1.
    int top()
    {
        // Write your code here.
        if (!st.empty())
        {
            int t = st.top();
            if (t < mini)
                return mini;
            return t;
        }
        return -1;
    }

    // Function to return minimum element of stack if it is present. Otherwise
    // return -1.
    int getMin()
    {
        // Write your code here.
        if (!st.empty())
            return mini;
        return -1;
    }
};