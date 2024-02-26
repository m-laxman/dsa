'''
One Away: There are three types of edits that can be performed on strings: insert a character, remove a character, or replace a character. 
Given two strings, write a function to check if they are one edit (or zero edits) away.
EXAMPLE
pale, ple -> true
pales, pale - > true
pale, bale -> true
pale, bake -> false

LC - 161. One Edit Distance
O(n), O(1)
'''

class Solution:
    def isOneEditDistance(self, s: str, t: str) -> bool:
        len_s, len_t = len(s), len(t)

        if len_t - len_s > 1:
            return False
            
        if len_s > len_t:
            return self.isOneEditDistance(t, s)
        print(s, " ", t)
        if len_t - len_s > 1:
            return False

        for i in range(len_s):
            if s[i] != t[i]:
                if len_s == len_t:
                    return s[i + 1:] == t[i + 1:]
                else:
                    return s[i:] == t[i + 1:]
        
        return len_s + 1 == len_t