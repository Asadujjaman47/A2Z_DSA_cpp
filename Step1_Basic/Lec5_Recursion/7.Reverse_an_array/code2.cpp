// Reverse an array

// Solution 2: Space-optimized iterative method
#include <bits/stdc++.h>
using namespace std;

// Function to prnt array
void printArray(int arr[], int n)
{
    cout << "The reversed array is:- " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Function to reverse array
void reverseArray(int arr[], int n)
{
    int p1 = 0, p2 = n - 1;
    while (p1 < p2)
    {
        swap(arr[p1], arr[p2]);
        p1++, p2--;
    }
    printArray(arr, n);
}

int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
    return 0;
}

// TC: O(n)
// SC: O(1)