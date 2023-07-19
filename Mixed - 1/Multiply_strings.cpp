#include <bits/stdc++.h>
string multiplyStrings(string a, string b)
{
    // Write your code here

    if (a == "0" || b == "0")
        return "0";
    vector<int> ans(a.length() + b.length(), 0);
    for (int i = a.length() - 1; i >= 0; i--)
    {
        for (int j = b.length() - 1; j >= 0; j--)
        {
            int prod = (b[j] - '0') * (a[i] - '0');
            ans[i + j + 1] += prod;
            ans[i + j] += (ans[i + j + 1] / 10);
            ans[i + j + 1] %= 10;
        }
    }
    string ans_s = "";
    for (int i = 0; i < a.size() + b.size(); i++)
    {
        if (i == 0 && ans[i] == 0)
            continue;
        ans_s += (ans[i] + '0');
    }
    return ans_s;
}