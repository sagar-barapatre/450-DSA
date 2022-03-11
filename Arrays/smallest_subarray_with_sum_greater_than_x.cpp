// Refer this video - https://youtu.be/21tQXPbGg7k
int sb(int arr[], int n, int x)
{
    int curr_sum = 0, min_len = n + 1;

    // Initialize starting and ending indexes
    int start = 0, end = 0;
    while (end < n)
    {
        // Keep adding array elements while current sum
        // is smaller than or equal to x
        while (curr_sum <= x && end < n)
            curr_sum += arr[end++];

        // If current sum becomes greater than x.
        while (curr_sum > x && start < n)
        {
            // Update minimum length if needed
            min_len = min(min_len, end - start);
            curr_sum = curr_sum - arr[start];
            start++;
        }
    }
    return min_len;
}