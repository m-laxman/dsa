/*
    Merge Intervals
    Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
    Output: [[1,6],[8,10],[15,18]]
    Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
*/
// O(n), O(n)
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> v;
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        v.push_back({intervals[0][0], intervals[0][1]});
        for (int i = 1; i < n; i++)
        {
            if (intervals[i][0] <= v[v.size() - 1][1] && intervals[i][1] >= v[v.size() - 1][1])
            {
                v[v.size() - 1][1] = intervals[i][1];
            }
            else if (intervals[i][0] >= v[v.size() - 1][0] && intervals[i][1] <= v[v.size() - 1][1])
            {
                continue;
            }
            else
            {
                v.push_back({intervals[i][0], intervals[i][1]});
            }
        }
        return v;
    }
};