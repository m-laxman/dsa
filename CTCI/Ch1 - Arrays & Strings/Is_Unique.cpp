/* Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
LC - 217. Contains Duplicate

Input: nums = [1,2,3,1]
Output: true
*/

// O(nlogn), O(1)
bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
}

//Using bit vector O(n), O(1)
bool isUnique(string str)
{
    int checker = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int val = str[i] - 'a';
        if ((checker & (1 << val)) > 0)
        {
            return false;
        }
        checker |= (1 << val);
    }
    return true;
}