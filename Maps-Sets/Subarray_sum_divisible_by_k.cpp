#include <bits/stdc++.h>
int subArrayCount(vector<int> &arr, int k)
{
    // Write your code here.
    int ans = 0;

    vector<int> mp(k, 0);
    // map<int, int> mp;
    long long int sum = 0;
    mp[0]++;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        int rem = sum % k;
        if (rem < 0)
        {
            rem += k;
        }
        if (mp[rem])
        {
            ans += mp[rem];
        }
        mp[rem]++;
    }
    return ans;
}
