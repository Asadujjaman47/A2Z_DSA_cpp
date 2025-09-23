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

Solution 1: Naive approach:
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    if (n == 0) {
        cout << 0;
    }
    else if (n == 1) {
        cout << 0 << " " << 1 << "\n";
    }
    else {
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        cout << "The Fibonacci Series up to " << n << "th term:" << "\n";
        for (int i = 0; i <= n; i++) {
            cout << fib[i] << " ";
        }
    }
}

// Time Complexity: O(n)+O(n)
// Space Complexity: O(n)