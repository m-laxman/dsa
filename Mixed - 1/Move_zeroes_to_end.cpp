void pushZerosAtEnd(vector<int> &arr)
{
    // Write your code here.
    int st = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
            swap(arr[i], arr[st++]);
    }
}