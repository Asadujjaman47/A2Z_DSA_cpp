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


For Rotating the Elements to left
*/

#include <bits/stdc++.h>
using namespace std;

void Rotatetoleft(int arr[], int n, int k) {
    // Edge case: empty array, nothing to rotate
    if (n == 0)
        return;

    // Reduce k to handle rotations greater than array size
    k = k % n;

    // Safety check (optional after modulo)
    if (k > n)
        return;

    int temp[k];

    // 1️⃣ Store the first k elements in a temporary array
    // These elements will be moved to the end after rotation
    // Example: arr = [1 2 3 4 5], k = 2 → temp = [1 2]
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // 2️⃣ Shift the remaining elements to the left by k positions
    // Example: [1 2 3 4 5] → [3 4 5 _ _]
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    // 3️⃣ Copy the stored elements from temp to the end of the array
    // This completes the left rotation
    for (int i = n - k; i < n; i++) {
        arr[i] = temp[i - n + k];
    }
}


// Time Complexity: O(n)
// Space Complexity: O(k)

int main() {
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Rotatetoleft(arr, n, k);
    cout << "After Rotating the elements to left " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}