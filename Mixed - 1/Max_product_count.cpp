#include <bits/stdc++.h>
vector<long long> maxProductCount(vector<int> &arr, int n)
{
    // Write your code here.
    if (n < 4)
        return {0};
    unordered_map<long long, long long> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
                mp[(long long)arr[i] * arr[j]]++;
        }
    }
    long long max_cnt = 0;
    vector<long long> nums;
    for (auto it : mp)
    {
        max_cnt = max(max_cnt, it.second);
    }
    if (max_cnt == 2)
    {
        return {0};
    }
    for (auto it : mp)
    {
        if (it.second == max_cnt)
        {
            nums.push_back(it.first);
        }
    }
    long long mini = *min_element(nums.begin(), nums.end());
    return {mini, max_cnt * (max_cnt / 2 - 1) / 4};
}