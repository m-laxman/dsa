/*Longest common subsequence

    Input:
    m = 6, n = 6
    str1 = ABCDGH
    str2 = AEDFHR
    Output: 3
    Explanation: LCS for input strings “ABCDGH” and “AEDFHR” is “ADH” of length 3.

    TC - O(mn)
*/

int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        int dp[n+1][m+1];
        for(int i=0; i<n+1; i++) 
            dp[i][0] = 0;
        for(int i=0; i<m+1; i++) 
            dp[0][i] = 0;
        for(int i=1; i<n+1; i++) {
            for(int j=1; j<m+1; j++) {
                if(s1[i-1]==s2[j-1]) 
                    dp[i][j] = 1+dp[i-1][j-1];
                else 
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m];
    }

int llcs(vector<vector<int>> &memo, int m, int n, string s1, string s2) {
    if(memo[m][n]!=-1)
        return memo[m][n];
    if(m==0 || n==0)
        memo[m][n]=0;
    else {
        if(s1[m-1]==s2[n-1])
            memo[m][n]=1 + llcs(memo, m-1, n-1, s1, s2);
        else
            memo[m][n] = max(llcs(memo, m-1, n, s1, s2), llcs(memo, m, n-1, s1, s2));
    }
    return memo[m][n];
}

int lcs(int m, int n, string s1, string s2) {
    
    vector< vector<int> > memo(m+1, vector<int> (n+1,-1));
    return llcs(memo,m,n,s1,s2);
    
}