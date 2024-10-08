/*
    Merge Sorted Array
    Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
    Output: [1,2,2,3,5,6]
    Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
*/
// O(n), O(1)
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] <= nums2[j])
            {
                nums1[k] = nums2[j];
                j--, k--;
            }
            else
            {
                nums1[k] = nums1[i];
                k--, i--;
            }
        }
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};