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
    int temp[n];
    for (int i = 1; i < n; i++)
    {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];
    display(temp, n);
}

// Time Complexity: O(n)

// Space Complexity: O(n)

int main()
{
    int n = 5;

    int arr[] = {1, 2, 3, 4, 5};
    display(arr, n);
    solve(arr, n);
}