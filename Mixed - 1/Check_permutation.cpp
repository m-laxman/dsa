#include <bits/stdc++.h>
bool areAnagram(string &str1, string &str2)
{
    // Write your code here.
    vector<int> mp(26, 0);
    if (str1.length() != str2.length())
        return false;
    for (int i = 0; i < str1.length(); i++)
    {
        mp[str1[i] - 'a']++;
        mp[str2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (mp[i] < 0)
            return false;
    }
    return true;
}