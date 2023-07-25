void merge(vector<int> &arr, int l, int m, int h)
{
    // vector<int> temp1(arr.begin()+l, arr.begin()+m+1),
    // temp2(arr.begin()+m+1, arr.begin()+h+1); very slow

    // int size1= temp1.size(), size2=temp2.size();
    int size1 = m - l + 1, size2 = h - m;
    int temp1[size1], temp2[size2];
    for (int i = 0; i < size1; i++)
        temp1[i] = arr[l + i];
    for (int i = 0; i < size2; i++)
        temp2[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < size1 && j < size2)
    {
        if (temp1[i] <= temp2[j])
            arr[k++] = temp1[i++];
        else
            arr[k++] = temp2[j++];
    }
    if (i < size1)
    {
        for (int t1 = i; t1 < size1; t1++)
            arr[k++] = temp1[t1];
    }
    if (j < size2)
    {
        for (int t2 = j; t2 < size2; t2++)
            arr[k++] = temp2[t2];
    }
}
void mergesort(vector<int> &arr, int l, int h)
{
    if (l < h)
    {
        int m = l + (h - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
}
void mergeSort(vector<int> &arr, int n)
{
    // Write your code here.
    mergesort(arr, 0, n - 1);
}