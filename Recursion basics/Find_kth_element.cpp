int solve(int st1, int n1, int st2, int n2, vector<int> &arr1,
          vector<int> &arr2, int k)
{

    if (st1 == n1)
    {
        return arr2[st2 + k];
    }
    if (st2 == n2)
    {
        return arr1[st1 + k];
    }
    int mid1 = (n1 - st1) / 2, mid2 = (n2 - st2) / 2;

    if (mid1 + mid2 < k)
    {
        if (arr1[st1 + mid1] > arr2[st2 + mid2])
        {
            // Rejecting the first half of 'ARR2'.
            return solve(st1, n1, st2 + mid2 + 1, n2, arr1, arr2, k - mid2 - 1);
        }
        else
        {
            // Rejecting the first half of 'ARR1'.
            return solve(st1 + mid1 + 1, n1, st2, n2, arr1, arr2, k - mid1 - 1);
        }
    }
    else
    {
        if (arr1[st1 + mid1] > arr2[st2 + mid2])
        {
            // Rejecting the second half of 'ARR1'.
            return solve(st1, st1 + mid1, st2, n2, arr1, arr2, k);
        }
        else
        {
            // Rejecting the second half of 'ARR2'.
            return solve(st1, n1, st2, st2 + mid2, arr1, arr2, k);
        }
    }
}
int findKthElement(vector<int> &arr1, vector<int> &arr2, int k)
{
    // Write your code here.
    int n1 = arr1.size(), n2 = arr2.size(), i = 0, j = 0;

    return solve(i, n1, j, n2, arr1, arr2, k - 1);
}