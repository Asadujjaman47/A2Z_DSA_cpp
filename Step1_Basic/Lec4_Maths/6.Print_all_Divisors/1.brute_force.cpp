// Print all Divisors of a given Number

#include <bits/stdc++.h>
using namespace std;

void printDivisorsBruteForce(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ", ";
        }
    }
    cout << "\n";
}
// TC: O(n)
// SC: O(n)

int main()
{
    int n;
    cin >> n;
    printDivisorsBruteForce(n);
    return 0;
}