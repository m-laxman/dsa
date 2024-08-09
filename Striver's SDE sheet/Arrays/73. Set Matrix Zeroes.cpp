/*
    Set Matrix Zeroes
    Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
    Output: [[1,0,1],[0,0,0],[1,0,1]]
*/
// O(m * n), O(1)
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int col0 = 0;
        int n = matrix.size(), m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][0] == 0)
                col0 = 1;
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
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
            if (col0 == 1)
                matrix[i][0] = 0;
        }
    }
};