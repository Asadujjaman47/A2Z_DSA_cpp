/**
 * Rearrange Array Elements by Sign
 * 
 * Variety-1

Problem Statement:

There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. 
Without altering the relative order of positive and negative elements, 
you must return an array of alternately positive and negative values.

Note: Start the array with positive elements.

Examples: 

Example 1:

Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5

Explanation: 

Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

Example 2:
Input:
arr[] = {1,2,-3,-1,-2,-3}, N = 6
Output:
1 -3 2 -1 3 -2
Explanation: 

Positive elements = 1,2,3
Negative elements = -3,-1,-2
To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3.
Also, -3 should come before -1, and -1 should come before -2.

// Brute Force Method:
 */


 #include<bits/stdc++.h>
 using namespace std;


vector<int> RearrangebySign(vector<int> A, int n) {

    // Define 2 vectors, one for storing positive
    // and other for negative elements of the array.
    vector<int> pos;
    vector<int> neg;

    // Segregate the array into positives and negativves
    for (int i = 0; i < n; i++) {
        if(A[i] > 0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
    }

    // Positives on even indices, negative on odd
    for (int i = 0; i < n/2; i++) {
        A[2*i] = pos[i];
        A[2*i+1] = neg[i];
    }

    return A;
}

 int main() {

    // Array Initialisation
    int n = 4;
    vector<int> A {1,2,-4,-5};

    vector<int> ans = RearrangebySign(A, n);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
 }

// Time Complexity: O(N+N/2)
 
// Space Complexity:  O(N/2 + N/2) = O(N) 