/* 11. Container With Most Water
    Input: height = [1,8,6,2,5,4,8,3,7]
    Output: 49
*/
// O(n), O(1)
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size(), l = 0, r = n - 1, res = 0;
        while (l < r)
        {
            res = max(res, min(height[r], height[l]) * (r - l));
            if (height[l] <= height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return res;
    }
};