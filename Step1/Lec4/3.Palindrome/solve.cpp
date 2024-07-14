#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int num = n;
    int ans = 0;

    while(num) {
        int rem = num % 10;
        ans = ans*10 + rem;
        num /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int rev = reverse(n);

    if(n == rev) {
        cout << "Palindrome\n";
    }
    else {
        cout << "not Palindrome\n";
    }

    return 0;
}