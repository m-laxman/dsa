/* 70. Climbing Stairs
    Input: n = 2
    Output: 2
    Explanation: There are two ways to climb to the top.
    1. 1 step + 1 step
    2. 2 steps
*/
// O(n), O(1)
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 0)
            return 0;
        int prev = 1;
        int cur = 1;
        int next = 1;
        for (int i = 2; i <= n; i++)
        {
            next = prev + cur;
            prev = cur;
            cur = next;
        }
        return next;
    }
    int climbStairs(int n)
    {
        if (n == 0)
            return 0;
        vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};