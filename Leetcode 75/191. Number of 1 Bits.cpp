/* 191. Number of 1 Bits

    Input: n = 11
    Output: 3
    Explanation:
        The input binary string 1011 has a total of three set bits.
*/
// O(32)~=O(1), O(1)
class Solution
{
public:
    int hammingWeight(int n)
    {
        if (n == 0)
            return 0;
        int cnt = 0;
        while (n)
        {
            if (n & 1)
                cnt++;
            n >>= 1;
        }
        return cnt;
    }
};