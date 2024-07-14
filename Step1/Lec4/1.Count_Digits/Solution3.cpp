#include<bits/stdc++.h>
using namespace std;

int count_digits(int n) {
    int digits = floor(log10(n) + 1);
    return digits;
}

int main() {
    int num;
    cin >> num;
    cout << "Number of digits in " << num << " is: " << count_digits(num);
    return 0;
}