// Second Largest Element in an Array without sorting

#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
    }
    return second_small;
}

int secondLargest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
            second_largest = arr[i];
    }
    return second_largest;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);
    cout << "Second smallest is " << sS << endl;
    cout << "Second largest is " << sL << endl;
    return 0;
}
// TC: O(N)
// SC: O(1)