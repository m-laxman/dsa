/* 268. Missing Number

    Input: nums = [3,0,1]
    Output: 2
    Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
*/
// O(n), O(1)
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int xor1 = 0, xor2 = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            xor1 ^= nums[i];
            xor2 ^= i;
        }
        xor2 ^= n;
        return xor1 ^ xor2;
    }
};