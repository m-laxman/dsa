bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return false;
            char ch = st.top();
            st.pop();
            if ((ch == '(' && s[i] == ')') || (ch == '{' && s[i] == '}') ||
                (ch == '[' && s[i] == ']'))
            {
                continue;
            }
            else
                return false;
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}