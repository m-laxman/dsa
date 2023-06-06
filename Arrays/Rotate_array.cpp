#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void rotateArr(vector<int> &a, int k, int n)
{
    // code here
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.begin() + n);
    reverse(a.begin(), a.begin() + n);
}
int main()
{
    // Write your code here
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    rotateArr(v, k, n);
    for (auto i : v)
        cout << i << " ";
    return 0;
}