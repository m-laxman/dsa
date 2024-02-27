/*
String Compression: Implement a method to perform basic string compression using the counts 
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the 
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z)

LC - 443. String Compression
*/

//O(n), O(1)
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0, j=i+1, len = chars.size(), k=0;
        vector<char> s;
        while(i<len && j<len) {
            if(chars[i]!=chars[j]) {
                int length = j-i;
                chars[k++] = chars[i];
                if(length!=1) {
                    string l = to_string(length);
                    for(char i: l)
                        chars[k++] = (char(i));
                    i=j;
                    j++;
                }
                else {
                    i++;
                    j++;
                }
            }
            else {
                j++;
            }
        }
        chars[k++] = chars[i];
        if((j-i)!=1) {
            string l = to_string(j-i);
                    for(char i: l)
                        chars[k++] = (char(i));
        }
        // chars[k] = "/0";
        return k;
    }   
};