/* Write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient space at the end to hold the add itional characters, and that you are given the "true"
length of the string. (Note: if implementing in Java, please use a character array so that you can perform this operation in place.)

Input: "Mr John Smith    "
Output: "Mr%20John%20Smith"
*/
// O(n), O(1)
class Solution {
public void spacesToPer20 (char[] str, int length) {

    int spaces = 0;
    for(int i=0; i<length; i++) {
        if(str[i] == ' ')
            spaces++;
    }

    int total_length = length + spaces * 2;
    if(length < str.length) 
        str[length] = '\0';
    for (int i=length-1; i>=0; i--) {
        if(str[i]==' ') {
            str[total_length-1] = '0';
            str[total_length-2] = '2';
            str[total_length-3] = '%';
            total_length -= 3;
        }
        else {
            str[total_length-1] = str[i];
            total_length--;
        }
    }
}

    public static void main(String[] args) {
        Solution s = new Solution();
        char[] str = "Mr John Smith    ".toCharArray();
        System.out.println(str);
        s.spacesToPer20(str, 13);
        System.out.println(str);
    }
}