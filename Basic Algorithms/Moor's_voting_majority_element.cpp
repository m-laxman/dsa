#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n)
{
    // Write your code here.
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
            ans = arr[i];
        if (ans == arr[i])
            cnt++;
        else
            cnt--;
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans == arr[i])
            cnt++;
    }
    if (cnt > n / 2)
        return ans;
    else
        return -1;
}