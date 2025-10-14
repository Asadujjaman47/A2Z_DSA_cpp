/*
Sum of first N Natural Numbers

Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

Examples:

Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15

// 2. Functional way
*/

#include <bits/stdc++.h>
using namespace std;

int func(int n) {

    // Base Condition.
    if (n == 0) {
        return 0;
    }

    // Problem broken down into 2 parts and then combined.
    return n + func(n - 1);
}

int main() {

    // Here, let's take the value of n to be 3
    int n = 4;
    cout << func(n) << endl;
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)
