#include <bits/stdc++.h>
bool solve(long long k)
{
    if (k == 1)
    {
        return 1;
    }
    if (k % 2 == 0)
        return 1 - solve((k + 1) / 2);
    else
        return solve((k + 1) / 2);
}

string kthChildNthGeneration(int n, long long int k)
{
    // Write your code here
    if (solve(k))
    {
        return "Male";
    }
    else
    {
        return "Female";
    }
}