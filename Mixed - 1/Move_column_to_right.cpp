#include <bits/stdc++.h>
vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k)
{
    // Write your code here.
    k = k % m;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = m - k; j < m; j++)
            ans.push_back(mat[i][j]);
        for (int j = 0; j < m - k; j++)
            ans.push_back(mat[i][j]);
    }
    return ans;
}