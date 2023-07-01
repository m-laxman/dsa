char kThCharaterOfDecryptedString(string s, long long k)
{
    //  Write your code here.
    long long st = 0, en = 0, l = s.length();
    long long n = 0;
    string ans = "";
    while (en < l)
    {
        string substr = "";
        while (en < l && (s[en] >= 'a' && s[en] <= 'z'))
        {
            substr += s[en++];
        }
        while (en < l && (s[en] >= '0' && s[en] <= '9'))
        {
            st++;
            en++;
        }
        if (st >= 0)
        {
            if (en <= l)
            {
                n = stoll(s.substr(en - st, st));
                if (k > n * substr.length())
                    k -= n * substr.length();
                else
                    return substr[(k - 1) % substr.length()];
                // for (long long k = 0; k < n; k++)
                //   ans += substr;
            }
        }
        st = 0;
    }
    return ans;
}