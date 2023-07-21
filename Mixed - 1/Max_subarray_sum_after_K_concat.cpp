#include <bits/stdc++.h>
long long kadane(vector<int> &arr, int n, int k)
{
    long long mxsf = INT_MIN, mx = 0;
    for (int i = 0; i < n * k; i++)
    {
        mx += arr[i % n];

        if (mxsf < mx)
            mxsf = mx;

        if (mx < 0)
            mx = 0;
    }
    return mxsf;
}
long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{

    if (k == 1)
        return kadane(arr, n, k);
    long long sum = 0, subsum = 0;
    sum = accumulate(arr.begin(), arr.end(), 0);
    if (sum <= 0)
        return kadane(arr, n, 2);
    else
    {
        subsum = kadane(arr, n, 2);
        subsum += (k - 2) * sum;
        return subsum;
    }
}