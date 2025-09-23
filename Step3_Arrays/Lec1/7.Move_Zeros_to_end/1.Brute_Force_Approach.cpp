/*
Move all Zeros to the end of the array

In this article we will learn how to solve the most asked coding interview problem: "Move all Zeros to the end of the array"

Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

Examples

Example 1:
Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

Example 2:
Input: 1,2,0,1,0,4,0
Output: 1,2,1,4,0,0,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

Brute Force Approach:
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(vector<int> arr, int n) {

    // temporary array:
    vector<int> temp;
    // copy non-zero elements
    // from original -> temp array:
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }

    // number of non-zero elements.
    int nz = temp.size();

    // copy elements from temp
    // fill first nz fields of
    // original array:
    for (int i = 0; i < nz; i++) {
        arr[i] = temp[i];
    }

    // fill rest of the cells with 0:
    for (int i = nz; i < n; i++) {
        arr[i] = 0;
    }

    return arr;
}
// Time Complexity: O(2*N)
// Space Complexity: O(N)

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();
    vector<int> ans = moveZeros(arr, n);
    for (auto &it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}