// Sum of first N numbers

// Solution1: Using Loop
#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of the first " << n << " numbers is: " << sum << "\n";
}

int main()
{

    solve(5);
    solve(6);
}

// TC: O(N)
// SC: O(1)