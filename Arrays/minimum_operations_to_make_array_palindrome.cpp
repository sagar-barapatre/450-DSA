// Refer this - https://youtu.be/wiDLcGxhh80
int palindromicOperations(int arr[], int n)
{
    int ans = 0;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] < arr[j])
        {
            i++;
            arr[i] += arr[i - 1];
            ans++;
        }
        else
        {
            j--;
            arr[j] += arr[j + 1];
            ans++;
        }
    }
    return ans;
}