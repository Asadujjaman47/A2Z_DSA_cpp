// Left Rotate the Array by One

#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void solve(int arr[], int n)
{
    int temp = arr[0]; // storing the first element of array in a variable
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp; // assigned the value of variable at the last index
    display(arr, n);
}

// Time Complexity: O(n)

// Space Complexity: O(1)

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    display(arr, n);
    solve(arr, n);
}