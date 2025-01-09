// Reverse an array

// Solution 4: Using library function (New Approach)
#include <bits/stdc++.h>
using namespace std;

// Function to print array
void printArray(int arr[], int n)
{
    cout << "The reversed array is:- " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Reverse array using library function
void reverseArray(int arr[], int n)
{
    // Reversing elements from index 0 to n-1
    reverse(arr, arr + n);
}

int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
    printArray(arr, n);
    return 0;
}

// TC: O(n)
// SC: O(1)