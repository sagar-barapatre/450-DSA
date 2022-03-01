// next_val = curr_val - (cum_sum - arr[i-1]) + arr[i-1] * (n-1);

// next_val = Value of ∑i*arr[i] after one rotation.
// curr_val = Current value of ∑i*arr[i]
// cum_sum = Sum of all array elements, i.e., ∑arr[i].

// Lets take example {1, 2, 3}. Current value is 1*0+2*1+3*2
// = 8. Shifting it by one will make it {2, 3, 1} and next value
// will be 8 - (6 - 1) + 1*2 = 5 which is same as 2*0 + 3*1 + 1*2

int sum = 0;
int currsum = 0;
int res = 0;

for (int i = 0; i < n; i++)
    sum += arr[i];
for (int i = 0; i < n; i++)
    currsum += (i * arr[i]);
res = currsum;

for (int i = 1; i < n; i++)
{
    int newsum = currsum - (sum - arr[i - 1]) + arr[i - 1] * (n - 1);
    currsum = newsum;
    res = max(res, currsum);
}
return res;