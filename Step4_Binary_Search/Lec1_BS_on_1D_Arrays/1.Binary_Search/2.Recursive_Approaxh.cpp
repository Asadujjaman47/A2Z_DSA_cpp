/**
 * Binary Search to find X in sorted array

 Problem statement: You are given a sorted array of integers and a target, your task is to search for the target in the given array. Assume the given array does not contain any duplicate numbers.

Let’s say the given array is = {3, 4, 6, 7, 9, 12, 16, 17} and target = 6.


* Recursion approach:
 */

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int low, int high, int target) {
    if (low > high) return -1;  // Base case.

    // Perforom the steps:
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}


int search(vector<int> &nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main() {
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = search(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                    << ind << endl;
    return 0;
}

// Time Complexity: Olog(N)