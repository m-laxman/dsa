#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int i=0, j=i+1;
    string ans = "";
    while(i<message.size()){
        cout<<message[i]<<" "<<message[j]<<"\n";
        if(message[i] == message[j]){
            j++;
        }
        else {
            int len = j-i;
            ans += message[i]+to_string(len);
            i = j;
        }
    }
    return ans;   
}