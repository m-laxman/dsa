#include <bits/stdc++.h>
char firstNonRepeatingCharacter(string str)
{

    // Write your code here
    unordered_map<char, int> mp;

    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (mp[str[i]] == 1)
            return str[i];
    }
    return str[0];
}
