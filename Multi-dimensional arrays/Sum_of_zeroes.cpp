#include <bits/stdc++.h>
int coverageOfMatrix(vector<vector<int>> &mat)
{
    // Write your code here.
    int x[] = {-1, 0, 1, 0};
    int y[] = {0, 1, 0, -1};
    int ans = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 0)
            {
                for (int k = 0; k < 4; k++)
                {
                    if ((i + x[k] >= 0 && i + x[k] < mat.size()) &&
                        (j + y[k] >= 0 && j + y[k] < mat[i].size()))
                        ans += mat[i + x[k]][j + y[k]];
                }
            }
        }
    }
    return ans;
}
