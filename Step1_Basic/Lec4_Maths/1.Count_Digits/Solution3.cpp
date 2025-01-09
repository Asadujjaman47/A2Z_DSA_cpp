// Count digits in a number
// log10 N + 1.

#include <bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
    int digits = floor(log10(n) + 1);
    return digits;
}

// Time Complexity: O(1)
// Space Complexity : O(1)

int main()
{
    int num;
    cin >> num;
    cout << "Number of digits in " << num << " is: " << count_digits(num);
    return 0;
}