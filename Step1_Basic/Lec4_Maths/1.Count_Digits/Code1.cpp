// Count digits in a number

#include <bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
    int x = n;
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    return count;
}
// Time Complexity: O(log10N + 1)
// Space Complexity : O(1)

int main()
{
    int n = 12345;
    cout << "Number of digit in " << n << " is: " << count_digits(n);
    return 0;
}
