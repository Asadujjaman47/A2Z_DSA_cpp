/*
Search Single Element in a sorted array


Problem Statement: Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.

Pre-requisite: Binary Search Algorithm

Examples

Example 1:
Input Format: arr[] = {1,1,2,2,3,3,4,5,5,6,6}
Result: 4
Explanation: Only the number 4 appears once in the array.

Example 2:

Input Format: arr[] = {1,1,3,5,5}
Result: 3
Explanation: Only the number 3 appears once in the array.


Naive Approach(Brute force): 
*/

#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size(); // size of the array.
    if (n == 1) return arr[0];

    for (int i = 0; i < n; i++) {

        // Check for first index:
        if (i == 0) {
            if (arr[i] != arr[i+1])
                return arr[i];
        }
        // Check for last index
        else if (i == n - 1) {
            if (arr[i] != arr[i-1])
                return arr[i];
        }
        else {
            if (arr[i] != arr[i-1] && arr[i] != arr[i+1]) {
                return arr[i];
            }
        }
    }

    // dummy return statement:
    return -1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}

// Time Complexity: O(N)

// Space Complexity: O(1)