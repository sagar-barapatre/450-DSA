//Also known as Kadane's Algorithm

int currentSum = 0;
int maxSum = INT_MIN;
for(int i = 0 ; i < n ; i++) {
		currentSum += arr[i];
		 if(currentSum < 0)
				currentSum = 0;
		maxSum = max(maxSum, currentSum);
}