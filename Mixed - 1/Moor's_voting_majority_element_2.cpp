#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int ans1 = 0, ans2 = 0, cnt1 = 0, cnt2 = 0;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (ans1 == arr[i])
            cnt1++;
        else if (ans2 == arr[i])
            cnt2++;
        else if (cnt1 == 0)
        {
            ans1 = arr[i];
            cnt1++;
        }
        else if (cnt2 == 0)
        {
            ans2 = arr[i];
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for (int i : arr)
    {
        if (ans1 == i)
            cnt1++;
        if (ans2 == i)
            cnt2++;
    }
    if (cnt1 > arr.size() / 3)
        ans.push_back(ans1);
    if (cnt2 > arr.size() / 3)
        ans.push_back(ans2);

    return ans;
}