// Sum of first N numbers

// Solution 2: Using the formula
#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int sum = n * (n + 1) / 2;
    cout << "The sum of the first " << n << " numbers is: " << sum << "\n";
}

int main()
{
    solve(5);
    solve(6);
}

// TC: O(1)
// SC: O(1)
