#include <bits/stdc++.h>
void selectionSort(vector<int> &arr, int n)
{
    // Write your code here.
    int currmin = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        int currmini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[currmini])
                currmini = j;
        }
        if (currmini != i)
            swap(arr[i], arr[currmini]);
    }
}