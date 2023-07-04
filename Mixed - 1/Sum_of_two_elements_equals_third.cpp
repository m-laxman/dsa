#include <bits/stdc++.h>
vector<int> findTriplets(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for (int k = n - 1; k > 1; k--)
    {
        int j = k - 1, i = 0;
        while (i < j)
        {
            int sum = arr[i] + arr[j];
            if (sum == arr[k])
                return {arr[i], arr[j], arr[k]};
            else if (sum < arr[k])
                i++;
            else
                j--;
        }
    }
    return {};
}