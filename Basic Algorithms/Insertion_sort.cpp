#include <bits/stdc++.h>
void insertionSort(int n, vector<int> &arr)
{
    // Write your code here.
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}