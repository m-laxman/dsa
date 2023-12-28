/*1. Two Sum
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/
// O(n), O(n)
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (mp.find(target - nums[i]) != mp.end())
        {
            return {i, mp[target - nums[i]]};
        }
        else
        {
            mp[nums[i]] = i;
        }
    }
    return {0, 0};
}

// O(nlogn), O(2)
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < nums.size(); i++)
    {
        v.push_back(make_pair(nums[i], i));
    }
    sort(v.begin(), v.end());
    int st = 0, en = nums.size() - 1;
    while (st < en)
    {
        if (v[st].first + v[en].first == target)
            return {v[st].second, v[en].second};
        else if (v[st].first + v[en].first < target)
            st++;
        else
            en--;
    }
    return {0, 0};
}

// O(n ^ 2), O(2)
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    return v;
}