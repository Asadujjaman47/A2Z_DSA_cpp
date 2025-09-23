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
    if (n == 0)
        return;
    k = k % n;
    if (k > n)
        return;

    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

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