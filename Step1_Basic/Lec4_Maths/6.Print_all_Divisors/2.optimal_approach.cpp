// Print all Divisors of a given Number

#include <bits/stdc++.h>
using namespace std;

void printDivisorsOptimal(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << ", ";
            if (i != n / i)
            {
                cout << n / i << ", ";
            }
        }
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    printDivisorsOptimal(n);
    return 0;
}