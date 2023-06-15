#include <bits/stdc++.h>
vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
    // Write your code here.
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> ans;
    for (int i = 0; i < n; i++)
    {
        string t = inputStr[i];
        sort(inputStr[i].begin(), inputStr[i].end());
        mp[inputStr[i]].push_back(t);
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
        ans.push_back(it->second);

    return ans;
}