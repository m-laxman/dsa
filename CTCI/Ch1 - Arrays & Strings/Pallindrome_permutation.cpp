/* Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase that is the same forwards and backwa rds. A permutation
is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
EXAMPLE
Input: Tact Coa
Output: True ( permutation s : "taco cat" , "at co eta" , etc .)

LC - 266. Palindrome Permutation
*/
//O(n), O(1)
class Solution {
public:
    bool canPermutePalindrome(string s) {
        map<char, int> mp;
        for(int i=0; i<s.length(); i++) {
            mp[s[i]]++;
        }
        int count_odd=0;
        for(auto it=mp.begin(); it!=mp.end(); it++) {
            if(it->second%2==1)
                count_odd++;
        }
        if(s.length()==1)
            return true;
        if(s.length() == mp.size() || count_odd>1)
            return false;
        return true;
    }
};