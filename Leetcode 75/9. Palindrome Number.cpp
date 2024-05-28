/*  9. Palindrome Number
    Input: x = 121
    Output: true
    Explanation: 121 reads as 121 from left to right and from right to left.
*/
// O(n), O(1)
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;

        int rev_num = 0;
        while (x > rev_num)
        {
            rev_num = rev_num * 10 + x % 10;
            x /= 10;
        }
        return (rev_num == x) || (rev_num / 10 == x);
    }
};