// Refer this video - https://www.youtube.com/watch?v=TOvWyFT0xCw&pp=sAQA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 5, 8, 4, 7, 6, 5, 3, 1};
    int n = 9;
    int idx = -1;
    for (int i = n - 1; i > 0; i--)
    { // here we are checking if the given array is already last permutation.
        if (arr[i - 1] < arr[i])
        { // basically we are checking if the array is ulta sorted hai ki nahi.
            idx = i;
            break;
        }
    }
    if (idx == -1)
        reverse(arr.begin(), arr.end());
    else
    {
        int prev = idx;
        for (int i = idx + 1; i < n; i++)
        {
            if (arr[i] > arr[idx - 1] && arr[i] < arr[prev])
            {
                prev = i;
            }
        }
        swap(arr[idx - 1], arr[prev]);
        reverse(arr.begin() + idx, arr.end());
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}