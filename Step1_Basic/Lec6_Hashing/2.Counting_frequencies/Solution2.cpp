// Count frequency of each element in the array

// Solution 2: Using Map

#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}
// TC: O(N)
// SC: O(n)

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}
