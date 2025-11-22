/**
 * next_permutation : find next lexicographically greater permutation
 * 
 * Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).

Examples
Example 1 :

Input format: Arr[] = {1,3,2}
Output: Arr[] = {2,1,3}
Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.
Example 2:

Input format: Arr[] = {3,2,1}
Output: Arr[] = {1,2,3}
Explanation: As we see all permutations of {1,2,3}, we find {3,2,1} at the last position. So, we have to return the topmost permutation.


Brute Force:
*/

#include<bits/stdc++.h>
using namespace std;

void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans) {
    if (index == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        recurPermute(index+1, nums, ans);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> ans;
    recurPermute(0, nums, ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> arr = {1, 3, 2}; // find next permutation


    // Step 1: Generate all permutations
    vector<vector<int>> allPermutations = permute(nums);

    // cout << "All permutations:\n";
    // for (const auto &perm : permutations) {
    //     for (int num : perm) {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }

    // Step 2: Sort all permutations lexicographically
    sort(allPermutations.begin(), allPermutations.end());

    // Step 3: Find current permutation and get next one
    bool found = false;
    for (int i = 0; i < allPermutations.size(); ++i) {
        if (allPermutations[i] == arr) {
            found = true;
            if (i + 1 < allPermutations.size()) {
                cout << "Next permutation: ";
                for (int num : allPermutations[i + 1]) {
                    cout << num << " ";
                }
                cout << endl;
            } else {
                cout << "No next permutation exists (it's the last one)." << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Input permutation not found in list (this shouldn't happen)." << endl;
    }

    return 0;
}

// Time complexity: O(N!xN)

// Space complexity: O(1).