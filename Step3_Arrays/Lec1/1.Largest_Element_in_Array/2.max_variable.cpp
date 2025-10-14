/*
Find the Largest element in an array

Problem Statement: Given an array, we have to find the largest element in the array.

Examples

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 

Recursive Approach:
Solution2: Using a max variable
*/

#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n) {

    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int n = 5;
    int max = findLargestElement(arr, n);
    cout << "The largest element in the array is: " << max << endl;
}

// Time Complexity: O(N)
// Space Complexity: O(1)
