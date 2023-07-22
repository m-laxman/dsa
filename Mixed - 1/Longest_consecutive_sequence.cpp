#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    // Write your code here.
    if (n == 0)
        return 0;
    sort(arr.begin(), arr.end());
    int largest = 1, cnt = 0, lastsmallest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == lastsmallest + 1)
        {
            cnt++;
            lastsmallest = arr[i];
        }
        else if (arr[i] != lastsmallest)
        {
            cnt = 1;
            lastsmallest = arr[i];
        }
        largest = max(largest, cnt);
    }
    return largest;
}