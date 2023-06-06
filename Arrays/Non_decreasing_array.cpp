#include <bits/stdc++.h>
bool isPossible(int *arr, int n)
{
    //  Write your code here.
    if (n <= 2)
        return true;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            cnt++;
            if (cnt > 1)
                return false;
            if (i >= 2 && arr[i - 2] > arr[i])
                arr[i] = arr[i - 1];
            else
                arr[i - 1] = arr[i];
        }
    }
    return true;
}