#include <bits/stdc++.h>
int findKthElement(vector<vector<int>> matrix, int k)
{
    // Write your code here.
    int rr = 0, cc = 0, r = matrix.size() - 1, c = matrix[0].size() - 1, d = 0, cnt = 0;
    while (cc <= c and rr <= r)
    {
        if (d == 0)
        {
            for (int i = cc; i <= c; ++i)
            {
                cnt++;
                if (cnt == k)
                    return matrix[rr][i];
            }
            d = 1, rr++;
        }
        else if (d == 1)
        {
            for (int i = rr; i <= r; ++i)
            {
                cnt++;
                if (cnt == k)
                    return matrix[i][c];
            }
            d = 2, c--;
        }
        else if (d == 2)
        {
            for (int i = c; i >= cc; --i)
            {
                cnt++;
                if (cnt == k)
                    return matrix[r][i];
            }
            d = 3, r--;
        }
        else if (d == 3)
        {
            for (int i = r; i >= rr; --i)
            {
                cnt++;
                if (cnt == k)
                    return matrix[i][cc];
            }
            d = 0, cc++;
        }
    }
}