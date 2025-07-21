/**
 * Kadane's Algorithm : Maximum Subarray Sum in an Array

Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Examples
Example 1:

Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output: 6 

Explanation: [4,-1,2,1] has the largest sum = 6. 

Examples 2: 

Input: arr = [1] 

Output: 1 

Explanation: Array has only one element and which is giving positive sum of 1. 

Optimal Approach (Kadane’s Algorithm):
// with start and end index
 */

#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long maxi = LONG_MIN; // maxumum sum 
    long long sum = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1;

    for (int i = 0; i < n; i++) {

        if (sum == 0) start = i; // starting index

        sum += arr[i];
        
        if (sum > maxi){
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }
        
        // If sum < 0: discard the sum calculated
        if (sum < 0) 
            sum = 0;

    }

    // printing the sumarray:
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << "\n";
        
    // To consider the sum of the empty subarray
    // uncomment the following check;

    // if (maxi < 0) maxi = 0;

    return maxi;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is : " << maxSum << endl;
    return 0;
}

// Time Complexity: O(N)

// Space Complexity: O(1)