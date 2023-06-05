#include <bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int sl = INT_MIN, l = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        else if (arr[i] > sl && arr[i] != l)
            sl = arr[i];
    }
    if (sl != INT_MIN)
        return sl;
    else
        return -1;
}