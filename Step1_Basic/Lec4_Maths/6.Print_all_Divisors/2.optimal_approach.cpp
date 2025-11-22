/*
Print all Divisors of a given Number

Problem Statement: Given an integer N, return all divisors of N.

A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

Examples
                Example 1:
                Input:N = 36
               
                Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
                
                Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
                                        
                Example 2:
                Input:N =12                
                
                Output: [1, 2, 3, 4, 6, 12]
                
                Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.     

Optimal Approach:
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDivisors(int n) {
    // Initialize an empty
    // vector to store the divisors
    vector<int> divisors;

    // Iterate up to the square
    // root of n to find divisors
    // Calculate the square root of n
    int sqrtN = sqrt(n);

    // Loop from 1 to the
    // square root of n
    for (int i = 1; i <= sqrtN; ++i) {
        // Check if i divides n
        // without leaving a remainder
        if (n % i == 0) {
            // Add divisor i to the list
            divisors.push_back(i);

            // Add the counterpart divisor
            // if it's different from i
            if (i != n / i) {
                // Add the counterpart
                // divisor to the list
                divisors.push_back(n / i);
            }
        }
    }

    // Return the list of divisors
    return divisors;
}
// Time Complexity: O(sqrt(N))
// Space Complexity : O(2*sqrt(N))

int main() {
    int number = 12;
    vector<int> divisors = findDivisors(number);

    cout << "Divisors of " << number << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}
