#include <bits/stdc++.h>
vector<vector<int>> sumOfKxKMatrices(vector<vector<int>> &arr, int k)
{
    // Write your code here.
    int n = arr.size();
    vector<vector<int>> prefixSum(n, vector<int>(n, 0)), ans;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int top = (i > 0) ? prefixSum[i - 1][j] : 0;
            int left = (j > 0) ? prefixSum[i][j - 1] : 0;
            int diagonal = (i > 0 && j > 0) ? prefixSum[i - 1][j - 1] : 0;
            prefixSum[i][j] = arr[i][j] + top + left - diagonal;
        }
    }
    for (int i = 0; i <= n - k; ++i)
    {
        std::vector<int> row;
        for (int j = 0; j <= n - k; ++j)
        {
            int sum = prefixSum[i + k - 1][j + k - 1];
            int top = (i > 0) ? prefixSum[i - 1][j + k - 1] : 0;
            int left = (j > 0) ? prefixSum[i + k - 1][j - 1] : 0;
            int diagonal = (i > 0 && j > 0) ? prefixSum[i - 1][j - 1] : 0;
            sum = sum - top - left + diagonal;
            row.push_back(sum);
        }
        ans.push_back(row);
    }
    return ans;
}
