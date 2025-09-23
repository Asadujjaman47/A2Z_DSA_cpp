/*
Check if a number is Palindrome or Not

Problem Statement: Given an integer N, return true if it is a palindrome else return false.

A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

Examples
                Example 1:
                Input:N = 4554
               
                Output:Palindrome Number
                
                Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
                                        
                Example 2:
                Input:N = 7789                
                
                Output: Not Palindrome
                
                Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome
								
*/

#include <iostream>
using namespace std;

// Function to check if a
// given integer is a palindrome
bool palindrome(int n) {
    // Initialize a variable to
    // store the reverse of the number
    int revNum = 0;
    // Create a duplicate variable to
    // store the original number
    int dup = n;
    // Iterate through each digit of
    // the number until it becomes 0
    while (n > 0) {
        // Extract the last
        // digit of the number
        int ld = n % 10;
        // Build the reverse number
        // by appending the last digit
        revNum = (revNum * 10) + ld;
        // Remove the last digit
        // from the original number
        n = n / 10;
    }
    // Check if the original number
    // is equal to its reverse
    if (dup == revNum) {
        // If equal, return true
        // indicating it's a palindrome
        return true;
    }
    else {
        // If not equal, return false
        // indicating it's not a palindrome
        return false;
    }
}
// Time Complexity: O(log10N + 1)
// Space Complexity: O(1)

int main() {
    int number;
    cin >> number;

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    }
    else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}