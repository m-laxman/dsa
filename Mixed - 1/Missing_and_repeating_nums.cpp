#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here

    sort(arr.begin(), arr.end());
    int repeat = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            repeat = arr[i];
            break;
        }
    }
    // set<int> s( arr.begin(), arr.end() );
    // arr.assign( s.begin(), s.end() );
    int k = n * (n + 1) / 2;
    k += repeat;
    for (int i = 0; i < n; i++)
    {
        k -= arr[i];
    }
    return {k, repeat};
}
