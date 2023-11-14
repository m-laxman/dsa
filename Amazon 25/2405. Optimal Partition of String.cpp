/*2405. Optimal Partition of String

    Input: s = "abacaba"
    Output: 4
    Explanation:
    Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
    It can be shown that 4 is the minimum number of substrings needed.

    TC - O(n)
*/

int partitionString(string s)
{
    vector<bool> v(26);
    int cnt = 1;
    for (auto i : s)
    {
        if (v[i - 'a'] != false)
        {
            cnt++;
            fill(v.begin(), v.end(), false);
            v[i - 'a'] = true;
        }
        else
            v[i - 'a'] = true;
    }
    return cnt;
}