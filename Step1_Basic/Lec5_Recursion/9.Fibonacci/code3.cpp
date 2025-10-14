/*
Print Fibonacci Series up to Nth term

Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

Examples:

Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6

Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)

*/

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int N) {

    // Base Condition
    if (N <= 1) {
        return N;
    }

    // Problem broken down into 2 functional calls
    // and their results combined and returned.
    int last = fibonacci(N - 1);
    int slast = fibonacci(N - 2);

    return last + slast;
}

int main() {

    // Here, let's take the value of N to be 4
    int N = 4;
    cout << fibonacci(N) << endl;
    return 0;
}

// Time Complexity: O(2^N)
// Space Complexity: O(N) 