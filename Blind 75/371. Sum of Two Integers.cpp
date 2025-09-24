/* 371. Sum of Two Integers
    Input: a = 1, b = 2
    Output: 3
*/
// O(logn), O(1)
class Solution
{
public:
    int getSum(int a, int b)
    {
        while (b != 0)
        {
            unsigned carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};