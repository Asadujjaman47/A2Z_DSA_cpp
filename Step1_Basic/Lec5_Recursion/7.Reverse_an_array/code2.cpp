/*
Reverse a given Array

Practice:
Solve Problem
Problem Statement: You are given an array. The task is to reverse the array and print it. 

Examples:

Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Example 2:
Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.


// Solution 2: Space-optimized iterative method
*/

#include <bits/stdc++.h>
using namespace std;

// Function to prnt array
void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Function to reverse array
void reverseArray(int arr[], int n) {
    int p1 = 0, p2 = n - 1;
    while (p1 < p2) {
        swap(arr[p1], arr[p2]);
        p1++, p2--;
    }
    printArray(arr, n);
}

int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
    return 0;
}

// Time Complexity: O(n), single-pass involved.
// Space Complexity: O(1) 