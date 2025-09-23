/*
Check if a number is prime or not

Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

Examples
                Example 1:
                Input:N = 2
               
                Output:True
                
                Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
                                        
                Example 2:
                Input:N =10                
                
                Output: False
                
                Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.      

Brute Force Approach:
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to check if a
// given number is prime.
bool checkPrime(int n) {
    // Initialize a counter variable to
    // count the number of factors.
    int cnt = 0;
    // Loop through numbers from 1 to n.
    for (int i = 1; i <= n; i++) {
        // If n is divisible by i
        // without any remainder.
        if (n % i == 0)
        {
            // Increment the counter.
            cnt = cnt + 1;
        }
    }

    // If the number of
    // factors is exactly 2
    if (cnt == 2) {
        // Return true, indicating
        // that the number is prime.
        return true;
    }
    // If the number of
    // factors is not 2.
    else {
        // Return false, indicating
        // that the number is not prime.
        return false;
    }
}
// Time Complexity: O(N)
// Space Complexity : O(1)

int main() {
    int n = 1483;
    bool isPrime = checkPrime(n);
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    }
    else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
