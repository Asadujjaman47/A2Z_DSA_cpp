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

Brute force Approach:
 */

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; // maxumum sum 

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // subarray = arr[i.....j]
            int sum = 0;

            // add all the elements of subarray:
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    }

    return maxi;
}

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is : " << maxSum << endl;
    return 0;
}

// Time Complexity: O(N3)

// Space Complexity: O(1)