// Find the number that appears once, and the other numbers twice
// Optimal Approach(Using XOR): 


#include<bits/stdc++.h>
using namespace std;


int getSingleElement(vector<int> &arr) {
    // size of the array:
    int n = arr.size();

    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
}

// Time Complexity: O(N)
// Space Complexity: O(1)
