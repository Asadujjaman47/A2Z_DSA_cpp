// Problem: Print from 1 to N using Recursion

#include <bits/stdc++.h>
using namespace std;

void func(int i, int n) {

    // Base Condition.
    if (i > n)
        return;

    cout << i << "\n";

    // Function call to print i till i increments to n.
    func(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    func(1, n);
    return 0;
}