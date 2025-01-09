// Count digits in a number

#include <bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
    string x = to_string(n);
    return x.length();
}

int main()
{
    int num;
    cin >> num;
    cout << "Number of digits in " << num << " is: " << count_digits(num);
    return 0;
}