
void generate(vector<string> &ans, string &temp, int k)
{
    if (k == 0)
    {
        ans.push_back(temp);
        return;
    }
    if (temp.back() == '0')
    {
        string tempo = temp;
        temp += '0';
        generate(ans, temp, k - 1);
        tempo += '1';
        generate(ans, tempo, k - 1);
    }
    else
    {
        temp += '0';
        generate(ans, temp, k - 1);
    }
}

vector<string> generateString(int k)
{
    // Write your code here.
    vector<string> ans;
    if (k == 0)
    {
        return ans;
    }
    string temp1 = "0";
    string temp2 = "1";
    generate(ans, temp1, k - 1);
    generate(ans, temp2, k - 1);
    return ans;
}
