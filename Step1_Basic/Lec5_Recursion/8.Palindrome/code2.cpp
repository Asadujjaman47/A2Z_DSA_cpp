/*
Check if the given String is Palindrome or not

Problem Statement: "Given a string, check if the string is palindrome or not."  A string is said to be palindrome if the reverse of the string is the same as the string.

Examples:

Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string.

Recursive Approach:
*/


#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s) {

    // Base Condition
    // If i exceeds half of the string means all the elements
    // are compared, we return true;
    if (i >= s.length() / 2)
        return true;

    // If the start is not equal to the end, not the palindrome.
    if (s[i] != s[s.length() - i - 1])
        return false;

    // If both charecters are the same, increment i and check start+1 and end-1.
    return palindrome(i + 1, s);
}

int main() {

    string s = "madam";
    cout << palindrome(0, s) << "\n";
    return 0;
}

// Time Complexity: O(N) 
// Space Complexity: O(1) 