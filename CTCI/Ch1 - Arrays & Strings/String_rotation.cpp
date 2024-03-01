/*
    String Rotation: Assume you have a method isSubs tring which checks if one word is a substring
    of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one
    call to isSubstring (e.g., "waterbottle"is a rotation of"erbottlewat").

    LC - 796. Rotate String
*/

//O(n^2), O(1)
class Solution {
public:
    bool rotateString(string s, string goal) {
        int cnt=0, len_s = s.length(), len_goal = goal.length();
        
        while(cnt<len_s) {
            char t = s[0];
            for(int k=1; k<len_s; k++) {
                s[k-1] = s[k];
            }
            s[len_s-1] = t;
            if(s == goal)
                return true;
            cnt++;
        }
        return false;
    }
};