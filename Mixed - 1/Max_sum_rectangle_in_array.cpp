#include <bits/stdc++.h>
int find(int v[], int n)
{
    int best_sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + v[i];
        if (best_sum < curr_sum)
            best_sum = curr_sum;
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return best_sum;
}
int maxSumRectangle(vector<vector<int>> &arr, int n, int m)
{
    // write your code here
    int ans = INT_MIN;
    int mat[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            mat[k] = 0;
        }
        for (int j = i; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                mat[k] += arr[j][k];
            }
            int curr_sum = find(mat, m);
            ans = max(ans, curr_sum);
        }
    }
    return ans;
}