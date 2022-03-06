int arr[] = {1, 10, 15};
int n = 3;
int k = 6;
int res = arr[n - 1] - arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] >= k)
    {
        int diff = max(arr[n - 1] - k, arr[i - 1] + k) - min(arr[0] + k, arr[i] - k);
        res = min(res, diff);
    }
}
cout << res;