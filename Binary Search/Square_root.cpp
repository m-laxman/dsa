int floorSqrt(int n)
{
    // Write your code here.
    int l = 1, h = n / 2, ans = 1;

    while (l <= h)
    {
        long m = l + (h - l) / 2;
        if (m * m <= n)
        {
            ans = m;
            l = m + 1;
        }
        else
            h = m - 1;
    }
    return ans;
}
