#include <bits/stdc++.h>
int minElementsToRemove(vector<int> &arr)
{
    // Write your code here.
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] > 1)
            ans++;
    }
    return ans;
}

int minElementsToRemove(vector<int> &arr)
{
    if (arr.size() <= 1)
        return 0;
    sort(arr.begin(), arr.end());
    int duplicatesCount = 0, currVal = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == currVal)
        {
            duplicatesCount++;
        }
        else
        {
            currVal = arr[i];
        }
    }
    return duplicatesCount;
}