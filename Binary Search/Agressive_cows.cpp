int possibleToPlace(vector<int> &stalls, int dist, int cows)
{
    int cnt = 1, last = stalls[0];
    for (int i : stalls)
    {
        if (i - last >= dist)
        {
            cnt++;
            last = i;
        }
    }
    return cnt >= cows;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int l = 0, h = stalls[stalls.size() - 1];
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (possibleToPlace(stalls, mid, k))
            l = mid + 1;
        else
            h = mid - 1;
    }
    return h;
}