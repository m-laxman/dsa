/*1492. The kth Factor of n

    Input : n = 12,
            k = 3 Output : 3 Explanation : Factors list is[1, 2, 3, 4, 6, 12], the 3rd factor is 3.

    TC - O(sqrt(n))
*/

// Brute force - find all the factors and return the kth factor

int kthFactor(int n, int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            --k;
            if (k == 0)
                return i;
        }
    }
    return -1;
}

// Optimized
for (int i = 1; i * i <= n; i++)
{
    if (n % i == 0)
    {
        k--;
        if (k == 0)
        {
            return i;
        }
    }
}

// If k is larger than the number of factors in the first half
for (int i = sqrt(n - 1); i >= 1; i--)
{
    if (n % i == 0)
    {
        k--;
        if (k == 0)
        {
            return n / i;
        }
    }
}

return -1;

int kthFactor(int n, int k)
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            if (--k == 0)
                return i;
    }
    if (k == 1)
        return n;
    else
        return -1;
}
