// Refer this video - https://www.youtube.com/watch?v=yEFlGWOVH8g
bool SortedSubsequence(int arr[], int n)
{
    if (n < 3)
        return false;
    int i = INT_MAX;
    int j = INT_MAX;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] <= i)
            i = arr[k];
        else if (arr[k] <= j)
            j = arr[k];
        else
            return true;
    }
    return false;
}