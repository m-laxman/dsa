#include <bits/stdc++.h>
string nextLargestPalindrome(string s, int length)
{
    // Write your code here.
    int l = length, mid = 0;
    string center = "", left = "", right = "", ans = "";
    if (l % 2)
        center = s[l / 2];
    else
        center = "";

    bool all9s = true;
    for (int i = 0; i < l / 2; i++)
    {
        left += s[i];
        if (left[i] != '9')
            all9s = false;
    }
    for (int i = l / 2 - 1; i >= 0; i--)
        right += s[i];

    ans += left + center + right;
    if (ans > s)
    {
        return ans;
    }
    else
    {
        if (center != "")
        {
            if (center < "9")
            {
                center = to_string(stoi(center) + 1);
                ans = left + center + right;
                return ans;
            }
            else
            {
                center = "0";
            }
        }
        if (all9s)
        {
            ans = "1";
            for (int i = 0; i < s.length() - 1; i++)
            {
                ans += "0";
            }
            ans += "1";
            return ans;
        }
        else
        {
            int li = left.length() - 1;
            while (left[li] == '9')
            {
                left[li] = '0';
                li--;
            }
            left[li]++;
            right = "";
            for (int i = l / 2 - 1; i >= 0; i--)
                right += left[i];
            ans = left + center + right;
            return ans;
        }
    }
}