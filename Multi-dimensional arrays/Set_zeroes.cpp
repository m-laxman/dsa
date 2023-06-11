#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    bool col0 = true;
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] == 0)
            col0 = false;
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[0][j] = matrix[i][0] = 0;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 1; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
        if (col0 == false)
            matrix[i][0] = 0;
    }
}