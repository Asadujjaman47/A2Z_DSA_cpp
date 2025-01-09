// Second Largest Element in an Array without sorting

#include <bits/stdc++.h>
using namespace std;

// this approach only works if there are no duplicates

void getElements(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl; // edge case when only one element is present in array
    sort(arr, arr + n);
    int small = arr[1];
    int large = arr[n - 2];
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getElements(arr, n);
    return 0;
}

// TC:O(NlogN)
// SC: O(1)