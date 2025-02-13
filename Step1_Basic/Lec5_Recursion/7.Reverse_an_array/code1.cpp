// Reverse an array

// Solution 1: Using an extra array.
#include <bits/stdc++.h>
using namespace std;

// Function to print array
void printArray(int ans[], int n)
{
    cout << "The revered array is:- " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

// Function to reverse array using an auxiliary array
void reverseArray(int arr[], int n)
{
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[n - i - 1] = arr[i];
    }
    printArray(ans, n);
}

int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
    return 0;
}

// TC: O(n)
// SC: O(n)