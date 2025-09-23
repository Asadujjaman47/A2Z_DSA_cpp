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

// 1. Parameterized way
*/

#include <bits/stdc++.h>
using namespace std;

void func(int i, int sum) {

    // Base Condition
    if (i < 1) {
        cout << sum << "\n";
        return;
    }

    // Function call to increment sum by i till i decrements to 1.
    func(i - 1, sum + i);
}

int main() {

    // Here, let's take the value of n to be 3.
    int n = 3;
    func(n, 0);
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)