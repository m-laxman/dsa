/* 338. Counting Bits
        Input: n = 2
        Output: [0,1,1]
        Explanation:
            0 --> 0
            1 --> 1
            2 --> 10
*/
// O(n), O(n)
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};