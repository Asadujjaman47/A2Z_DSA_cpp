// Recursive way of calculating the sum of first N Natural Numbers:
// 1. Parameterized way
#include <bits/stdc++.h>
using namespace std;

void func(int i, int sum)
{

    // Base Condition
    if (i < 1)
    {
        cout << sum << "\n";
        return;
    }

    // Function call to increment sum by i till i decrements to 1.
    func(i - 1, sum + i);
}

int main()
{

    // Here, let's take the value of n to be 3.
    int n = 3;
    func(n, 0);
    return 0;
}

// TC: O(N)
// SC: O(N)