''' Check Permutation: Given two strings, write a method to decide if one is a permutation of the other
    242. Valid Anagram
'''

# O(n), O(n)
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        lst = [0]*26
        for i in s:
            lst[ord(i)-ord('a')]+=1
        for i in t:
            lst[ord(i)-ord('a')]-=1
        
        for i in lst:
            if i!=0:
                return False
        return True