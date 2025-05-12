// Two Sum : Check if a pair with given sum exists in Array
// Better Approach(using Hashing)
// Code Variant 1:

#include<bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

int main() {
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)
