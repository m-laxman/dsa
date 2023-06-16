#include <bits/stdc++.h>
bool isSubSequence(string str1, string str2)
{
    // Write your code here.
    int st = 0, en = str2.length(), ans = 0, i = 0;
    for (st; st < en; st++)
    {
        if (str2[st] == str1[i])
        {
            ans++;
            i++;
        }
    }
    if (ans == str1.size())
        return 1;
    else
        return 0;
}
