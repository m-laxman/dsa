/*
    Maximum Subarray
    Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
    Output: 6
    Explanation: [4,-1,2,1] has the largest sum = 6.
*/
// O(n), O(1)
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = nums[0], curSum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            curSum = max(curSum + nums[i], nums[i]);
            sum = max(curSum, sum);
        }
        return sum;
    }
};