#include <bits/stdc++.h>
int pairSum(vector<int> &arr, int n, int target)
{
    // Write your code here.
    int st = 0, en = n - 1, ans = 0;
    while (st < en)
    {
        long long res = arr[st] + arr[en];
        if (res == target)
        {
            ans++;
            st++;
            en--;
        }
        else if (res < target)
            st++;
        else
            en--;
    }
    if (ans == 0)
        return -1;
    else
        return ans;
}