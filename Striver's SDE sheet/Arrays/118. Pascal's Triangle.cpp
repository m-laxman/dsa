/*
    Pascal's Triangle
    Input: numRows = 5
    Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
*/
// O(n^2), O(n^2)
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        vector<int> prow;

        for (int i = 0; i < numRows; i++)
        {
            vector<int> crow(i + 1, 1);
            for (int j = 1; j < i; j++)
                crow[j] = prow[j - 1] + prow[j];

            res.push_back(crow);
            prow = crow;
        }
        return res;
    }
};