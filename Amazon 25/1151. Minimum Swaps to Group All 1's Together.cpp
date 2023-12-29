/*  1151. Minimum Swaps to Group All 1's Together
    Input: data = [1,0,1,0,1]
    Output: 1
    Explanation: There are 3 ways to group all 1's together:
    [1,1,1,0,0] using 1 swap.
    [0,1,1,1,0] using 2 swaps.
    [0,0,1,1,1] using 1 swap.
    The minimum is 1.
*/
// O(n), O(1)
int minSwaps(vector<int> &data)
{
    int n_ones = accumulate(data.begin(), data.end(), 0);
    int ans = INT_MAX;
    if (n_ones == 1)
        return 0;

    int curr_ones = 0;
    for (int i = 0; i < n_ones; i++)
    {
        if (data[i] == 1)
            curr_ones++;
    }
    ans = n_ones - curr_ones;

    for (int i = n_ones; i < data.size(); i++)
    {
        if (data[i - n_ones] == 1)
        {
            curr_ones--;
        }
        if (data[i] == 1)
        {
            curr_ones++;
        }
        ans = min(ans, n_ones - curr_ones);
    }
    return ans;
}