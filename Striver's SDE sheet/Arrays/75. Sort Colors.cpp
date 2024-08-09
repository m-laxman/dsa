/*
    Sort Colors
    input: [2,0,2,1,1,0]
    output: [0,0,1,1,2,2]
    explanation: sort the array in ascending order
*/
// O(n), O(1)
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int l = 0, m = 0, h = nums.size() - 1;
        while (m <= h)
        {
            if (nums[m] == 0)
            {
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if (nums[m] == 1)
                m++;
            else
            {
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }
};