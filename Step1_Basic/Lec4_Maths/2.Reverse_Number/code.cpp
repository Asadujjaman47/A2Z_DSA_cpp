/*
Reverse Digits of A Number

Problem Statement: Given an integer N return the reverse of the given number.

Note: If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

Examples
                Example 1:
                Input:N = 12345
               
                Output:54321
                
                Explanation: The reverse of 12345 is 54321.
                                        
                Example 2:
                Input:N = 7789                
                
                Output: 9877
                
                Explanation: The reverse of number 7789 is 9877.				
*/

#include <iostream>
using namespace std;

int main() {
	// Declare a variable 'n' to
	// store the input integer.
	int n;
	// Prompt the user to enter an
	// integer and store it in 'n'.
	cin >> n;
	// Initialize a variable 'revNum' to
	// store the reverse of the input integer.
	int revNum = 0;
	// Start a while loop to reverse the
	// digits of the input integer.
	while (n > 0) {
		// Extract the last digit of
		// 'n' and store it in 'ld'.
		int ld = n % 10;
		// Multiply the current reverse number
		// by 10 and add the last digit.
		revNum = (revNum * 10) + ld;
		// Remove the last digit from 'n'.
		n = n / 10;
	}
	// Print the reversed number.
	cout << revNum;
}

// Time Complexity: O(log10N + 1)
// Space Complexity: O(1)
