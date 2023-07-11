int singleNonDuplicate(vector<int> &arr)
{
    // Write your code here
    int l = 0, h = arr.size() - 1;
    if (h == 0)
        return arr[0];

    if (arr[0] != arr[1])
        return arr[0];
    else if (arr[h] != arr[h - 1])
        return arr[h];

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            return arr[mid];

        if (mid % 2)
        {
            if (arr[mid] == arr[mid - 1])
                l = mid + 1;
            else
                h = mid - 1;
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
                h = mid - 2;
            else
                l = mid + 2;
        }
    }
}