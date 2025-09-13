/**
 * Count Subarray sum Equals K


Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.

A subarray is a contiguous non-empty sequence of elements within an array.

Pre-requisite: Longest subarray with given sum

Examples

Example 1:
Input Format: N = 4, array[] = {3, 1, 2, 4}, k = 6
Result: 2
Explanation: The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].

Example 2:
Input Format: N = 3, array[] = {1,2,3}, k = 3
Result: 2
Explanation: The subarrays that sum up to 3 are [1, 2], and [3].

// Optimal Approach:
 */

#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int> &arr, int k) {
    int n = arr.size(); // size of the given array.
    map<int, int> mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++) {
        // add current element of prefix Sum:
        preSum += arr[i];

        // Calculate x-K
        int remove = preSum - k;

        // Add the number of subarray to be removed:
        cnt += mpp[remove];

        // Update the count of prefix Sum
        // in the map
        mpp[preSum] += 1;
    }

    return cnt;
}

int main() {
    vector arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "Thhe number of subarrays is: " << cnt << "\n";
    return 0;
}

// Time Complexity: O(N) or O(N*logN)
// Space Complexity: O(N)