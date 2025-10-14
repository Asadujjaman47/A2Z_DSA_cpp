/*
Left Rotate the Array by One

Problem Statement: Given an array of N integers, left rotate the array by one place.

Examples

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 2,3,4,5,1
Explanation: 
Since all the elements in array will be shifted 
toward left by one so ‘2’ will now become the 
first index and and ‘1’ which was present at 
first index will be shifted at last.


Example 2:
Input: N = 1, array[] = {3}
Output: 3
Explanation: Here only element is present and so 
the element at first index will be shifted to 
last index which is also by the way the first index.

Solution 1: Brute force Approach
*/

#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void solve(int arr[], int n) {
    int temp[n];
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];
    display(temp, n);
}

int main() {
    int n = 5;

    int arr[] = {1, 2, 3, 4, 5};
    display(arr, n);
    solve(arr, n);
}

// Time Complexity: O(n)
// Space Complexity: O(n) 