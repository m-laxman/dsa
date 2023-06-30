#include <bits/stdc++.h>
vector<int> sort(int n, vector<int> &arr)
{
    // Write your code here.
    int mini = INT_MAX, maxi = INT_MIN;
    for (auto i : arr)
    {
        if (i < mini)
            mini = i;
        if (i > maxi)
            maxi = i;
    }

    vector<int> count(maxi - mini + 1, 0), sorted(n);

    for (int i = 0; i < n; i++)
    {
        count[arr[i] - mini]++;
    }
    for (int i = 1; i < maxi - mini + 1; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        sorted[count[arr[i] - mini] - 1] = arr[i];
        count[arr[i] - mini]--;
    }

    return sorted;
}