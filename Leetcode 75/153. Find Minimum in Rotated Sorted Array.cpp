/* 153. Find Minimum in Rotated Sorted Array
    Input: nums = [3,4,5,1,2]
    Output: 1
    Explanation: The original array was [1,2,3,4,5] rotated 3 times.
*/
// O(logn), O(1)
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = 0, h = nums.size() - 1;
        int ans = INT_MAX;

        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if (nums[l] <= nums[mid])
            {
                ans = min(ans, nums[l]);
                l = mid + 1;
            }
            else
            {
                ans = min(ans, nums[mid]);
                h = mid - 1;
            }
        }
        return ans;
    }
};