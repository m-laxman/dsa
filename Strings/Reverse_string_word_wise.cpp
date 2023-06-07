#include <bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string input)
{
    // Write your code here
    reverse(input.begin(), input.end());
    int cnt = 0, st = 0, en = 0;
    while (en < input.length())
    {
        while (en < input.length() && input[en] == ' ')
        {
            st++;
            en++;
        }
        while (en < input.length() && input[en] != ' ')
        {
            en++;
        }
        reverse(input.begin() + st, input.begin() + en);
        st = en;
    }
    return input;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}