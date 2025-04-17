// Find the missing number in an array
// Better Approach (using Hashing):

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int N) {

    int hash[N + 1] = {0}; // hash array

    // storing the frequencies:
    for (int i = 0; i < N - 1; i++)
        hash[a[i]]++;

    // checking the frequencies for numbers i to N:
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}
// Time Complexity: O(N) + O(N) ~ O(2*N),
// Space Complexity: O(N) 

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 3, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}