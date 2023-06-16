int maxArea(vector<int> &height)
{
    // Write your code here.
    int st = 0, en = height.size() - 1, lmax = 0, rmax = 0;
    int res = 0;
    while (st < en)
    {
        if (height[st] <= height[en])
        {
            res = max(res, (en - st) * height[st]);
            st++;
        }
        else
        {
            res = max(res, (en - st) * height[en]);
            en--;
        }
    }
    return res;
}