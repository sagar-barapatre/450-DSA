int wrapsum, nowrapsum;
nowarpsum = kadane(arr, n);
int totalSum = 0;
for (int i = 0; i < n; i++)
{
    totalSum += arr[i];
    arr[i] = -arr[i];
}
// wrapsum = nowrapsum - (-kadane(arr, n));
wrapsum = nowrapsum + kadane(arr, n);