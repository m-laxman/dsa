''' 567. Permutation in String
'''

# O(n), O(n)
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        frq_lst1 = [0]*26
        frq_lst2 = [0]*26
        for i in s1:
            frq_lst1[ord(i)-ord('a')]+=1

        i=0
        j=0
        while(j<len(s2)):
            frq_lst2[ord(s2[j])-ord('a')]+=1

            if (j-i+1 == len(s1)):
                if (frq_lst1==frq_lst2):
                    return True
            
            if(j-i+1<len(s1)):
                j+=1
            else:
                frq_lst2[ord(s2[i])-ord('a')]-=1
                i+=1
                j+=1
                
        return False