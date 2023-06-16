#include <bits/stdc++.h>
vector<int> separateNegativeAndPositive(vector<int> &nums)
{
    // Write your code here.
    int st = 0, en = nums.size() - 1;
    while (st < en)
    {
        if (nums[st] >= 0)
        {
            if (nums[en] < 0)
            {
                swap(nums[st], nums[en]);
                st++;
            }
            else
                en--;
        }
        else
            st++;
    }
    return nums;
}