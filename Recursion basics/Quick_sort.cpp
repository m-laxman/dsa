#include <bits/stdc++.h>
int partition(vector<int> &arr, int l, int h)
{
    int pivot = arr[l];
    int i = l, j = h;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= h - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= l + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);
    return j;
}
void quicksort(vector<int> &arr, int l, int h)
{
    if (l < h)
    {
        int j = partition(arr, l, h);
        quicksort(arr, l, j - 1);
        quicksort(arr, j + 1, h);
    }
}
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    int l = 0, h = arr.size() - 1;
    quicksort(arr, l, h);
    return arr;
}
