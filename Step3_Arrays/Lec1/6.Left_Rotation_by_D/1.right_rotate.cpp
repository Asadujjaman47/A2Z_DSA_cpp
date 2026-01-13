/*
Rotate array by K elements

Rotate array by K elements

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples:

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
Output: 9 10 11 3 7 8
Explanation: Array is rotated to right by 3 position.


Approach 1: Using a temp array 
*/

#include <bits/stdc++.h>
using namespace std;

void Rotatetoright(int arr[], int n, int k) {
    // Edge case: empty array, nothing to rotate
    if (n == 0)
        return;

    // Reduce k to avoid unnecessary full rotations
    k = k % n;

    // Safety check (optional after modulo, kept for clarity)
    if (k > n)
        return;

    int temp[k];

    // 1️⃣ Copy the last k elements of the array into a temporary buffer
    // These elements will wrap around to the front after rotation
    // Example: arr = [1 2 3 4 5], k = 2 → temp = [4 5]
    for (int i = n - k; i < n; i++) {
        temp[i - n + k] = arr[i];
    }

    // 2️⃣ Shift the remaining elements to the right by k positions
    // Start from the end to avoid overwriting values that are still needed
    // Example: [1 2 3 _ _] → [_ _ 1 2 3]
    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    // 3️⃣ Copy the saved elements from temp back to the front of the array
    // This completes the right rotation
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

// Time Complexity: O(n)
// Space Complexity: O(k)

int main() {
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Rotatetoright(arr, n, k);
    cout << "After Rotating the elements to right " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}