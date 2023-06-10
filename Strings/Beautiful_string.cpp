int makeBeautiful(string str)
{
    // Write your code here
    int n = str.length(), ans1 = 0, ans2 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0)
        {
            if (str[i] != '0')
            {
                ans1++;
            }
            else
            {
                ans2++;
            }
        }
        else
        {
            if (str[i] != '1')
            {
                ans1++;
            }
            else
            {
                ans2++;
            }
        }
    }
    return min(ans1, ans2);
}