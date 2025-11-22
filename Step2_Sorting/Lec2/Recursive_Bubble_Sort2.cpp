/*
Recursive Bubble Sort Algorithm

Problem Statement: Given an array of N integers, write a program to implement the Recursive Bubble Sort algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52

Example 2:
Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5

Optimized approach (Reducing time complexity for the best case):
*/


#include <bits/stdc++.h>
using namespace std;

// Optimized approach (Reducing time complexity for the best case):
void bubble_sort(int arr[], int n) {

    // Base Case: range ==1.
    if (n == 1)
        return;

    int didSwap = 0;
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }

    // if no swapping happens:
    if (didSwap == 0)
        return;

    // Range reduced after recursion:
    bubble_sort(arr, n - 1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Bubble Sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    bubble_sort(arr, n);

    cout << "After Using Bubble Sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

// Time Complexity: O(N2) for the worst and average cases and O(N) for the best case.
// Space Complexity: O(N) auxiliary stack space.