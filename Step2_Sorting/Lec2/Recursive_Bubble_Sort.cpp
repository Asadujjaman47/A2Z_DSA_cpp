#include <bits/stdc++.h>
using namespace std;

// Recursive Bubble sort:
void bubble_sort(int arr[], int n)
{

    // Base Case: range ==1.
    if (n == 1)
        return;

    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    // Range reduced after recursion:
    bubble_sort(arr, n - 1);
}

// TC: O(N^2)
// SC: O(N)

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Bubble Sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    bubble_sort(arr, n);

    cout << "After Using Bubble Sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}