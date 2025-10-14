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


*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {

    int left = 0, right = s.length() - 1;

    while (left < right) {

        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else {
            left++;
            right--;
        }
    }
    return true;
}
// Time Complexity:  O(N)
// Space Complexity: O(1)

int main() {
    string str = "ABCDCBA";
    bool ans = isPalindrome(str);

    if (ans == true) {
        cout << "Palindrome\n";
    }
    else {
        cout << "Not Palindrome\n";
    }

    return 0;
}