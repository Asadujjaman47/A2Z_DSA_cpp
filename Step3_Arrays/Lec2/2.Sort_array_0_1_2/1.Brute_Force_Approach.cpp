/**
 * Sort an array of 0s, 1s and 2s
 * 
 * Problem Statement: Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Examples
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]

Input: nums = [0]
Output: [0]


Brute Force Approach:
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sort(arr.begin(), arr.end());
    cout << "After sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


//  Time Complexity: O(N*logN)

//  Space Complexity: O(1)