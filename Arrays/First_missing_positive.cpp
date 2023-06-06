#include <bits/stdc++.h>
int firstMissing(int arr[], int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0 && arr[i] <= n - 1 && arr[i] != arr[arr[i] - 1])
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }
    return n + 1;
}