#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
    for (int l = n - 1; l >= 3; l--)
    {
        for (int k = l - 1; k >= 2; k--)
        {
            int j = k - 1, i = 0, sum = 0;
            while (i < j)
            {
                sum = arr[l] + arr[k] + arr[j] + arr[i];
                if (sum == target)
                    return "Yes";
                else if (sum < target)
                    i++;
                else
                    j--;
            }
        }
    }
    return "No";
}
