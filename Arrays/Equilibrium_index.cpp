#include <bits/stdc++.h>
int findEquilibriumIndex(vector<int> &arr)
{
    // Write your code here.
    int totalSum = 0, leftSum = 0;
    totalSum = accumulate(arr.begin(), arr.end(), 0);
    for (int i = 0; i < arr.size(); i++)
    {
        totalSum -= arr[i];
        if (totalSum == leftSum)
            return i;
        leftSum += arr[i];
    }
    return -1;
}