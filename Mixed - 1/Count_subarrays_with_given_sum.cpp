int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    // Write Your Code Here
    int n = arr.size(), sum = 0, cnt = 0, prevind = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            cnt++;
        }
        else if (sum > k)
        {
            while (sum > k)
                sum -= arr[prevind++];
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}