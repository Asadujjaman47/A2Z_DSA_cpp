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

Brute Force Approach:
Solution1: Sorting
*/

#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main() {
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArr(arr2) << endl;

    return 0;
}

// Time Complexity: O(N*log(N))
// Space Complexity: O(n)