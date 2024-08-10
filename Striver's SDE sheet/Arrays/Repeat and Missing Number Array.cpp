/*
    Repeat and Missing Number Array
    Input:[3 1 2 5 3]
    Output:[3, 4]
    Explanation: 3 is repeating and 4 is missing.
*/
// O(n), O(1)

vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    int n1 = A.size();
    for (int i = 0; i < n1; i++)
    {
        while (A[i] != A[A[i] - 1])
            swap(const_cast<int &>(A[i]), const_cast<int &>(A[A[i] - 1]));
    }
    int temp1, temp2;
    vector<int> res;
    for (int i = 0; i < n1; i++)
    {
        if (A[i] != i + 1)
        {
            // cnt++;
            temp1 = A[i];
            temp2 = i + 1;
        }
    }
    return {temp1, temp2};
}
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
