// Problem: Print from N to 1 using Recursion

#include <bits/stdc++.h>
using namespace std;

void fun(int n) {

    // Base Condtion
    if (n < 1)
        return;
    cout << n << endl;

    // Function call to print i till i decrements to 1
    fun(n - 1);
}

int main() {

    int n;
    cin >> n;
    fun(n);
}

// Time Complexity: O(N)
// Space Complexity: O(N)