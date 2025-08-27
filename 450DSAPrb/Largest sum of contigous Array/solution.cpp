long long maxSubarraySum(vector<int> arr, int n)
{
    long long currsum = 0;
    long long maxsum = 0;  

    for (int i = 0; i < n; i++) {
        currsum += arr[i];
        if (currsum < 0)
            currsum = 0;    
        if (currsum > maxsum)
            maxsum = currsum;
    }

    return maxsum;
}
