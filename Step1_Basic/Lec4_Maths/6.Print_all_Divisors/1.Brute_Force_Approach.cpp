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

Brute Force Approach:
*/

#include <bits/stdc++.h>
using namespace std;

int *printDivisors(int n, int &size) {
    // Allocate memory for
    // the array of divisors
    int *divisors = new int[n];
    // Initialize the count of divisors
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            // Add the divisor to the array
            divisors[count++] = i;
        }
    }
    // Update the size parameter
    // with the count of divisors
    size = count;
    // Return the array of divisors
    return divisors;
}
// Time Complexity: O(N)
// Space Complexity : O(N)

int main() {
    int number = 12;
    int size;
    int *divisors = printDivisors(number, size);

    cout << "Divisors of " << number << " are: ";
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << std::endl;

    delete[] divisors;

    return 0;
}
