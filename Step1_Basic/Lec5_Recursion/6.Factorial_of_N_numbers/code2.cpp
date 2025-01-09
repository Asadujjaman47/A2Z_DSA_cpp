// Factorial of N numbers

// Solution 2: Recursive
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    // Base Condition.
    if (n == 0)
    {
        return 1;
    }

    // Problem broken down into 2 parts and then combined.
    return n * factorial(n - 1);
}

int main()
{
    int n = 3;
    cout << factorial(n) << "\n";
    return 0;
}