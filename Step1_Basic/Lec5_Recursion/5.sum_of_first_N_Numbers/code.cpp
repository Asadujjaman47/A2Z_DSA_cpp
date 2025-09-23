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

// Solution1: Using Loop
*/

#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of the first " << n << " numbers is: " << sum << "\n";
}

int main() {

    solve(5);
    solve(6);
}

// Time Complexity: O(N)
// Space Complexity: O(1)