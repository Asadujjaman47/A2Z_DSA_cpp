// Find GCD of two numbers

#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b)
{
    // Continue loop as long as both
    // a and b are greater than 0
    while (a > 0 && b > 0)
    {
        // If a is greater than b,
        // subtract b from a and update a
        if (a > b)
        {
            // Update a to the remainder
            // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else
        {
            // Update b to the remainder
            // of b divided by a
            b = b % a;
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if (a == 0)
    {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}
// Time Complexity: O(min(N1, N2))
// Space Complexity: O(1)

int main()
{
    int n1 = 20, n2 = 15;

    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}
