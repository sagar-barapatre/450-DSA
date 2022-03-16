#include <stdio.h>

// Function to print subarray having a given sum using
// sliding window technique
void findSubarray(int arr[], int n, int sum)
{
    // maintains the sum of the current window
    int windowSum = 0;

    // maintain a window `[low, high-1]`
    int low = 0, high = 0;

    // consider every subarray starting from the `low` index
    for (low = 0; low < n; low++)
    {
        // if the current window's sum is less than the given sum,
        // then add elements to the current window from the right
        while (windowSum < sum && high < n)
        {
            windowSum += arr[high];
            high++;
        }

        // if the current window's sum is equal to the given sum
        if (windowSum == sum)
        {
            printf("Subarray found [%d–%d]\n", low, high - 1);
            return;
        }

        // At this point, the current window's sum is more than the given sum.
        // Remove the current element (leftmost element) from the window
        windowSum -= arr[low];
    }
}

int main(void)
{
    // an array of positive integers
    int arr[] = {2, 6, 0, 9, 7, 3, 1, 4, 1, 10};
    int sum = 15;

    int n = sizeof(arr) / sizeof(arr[0]);

    findSubarray(arr, n, sum);

    return 0;
}