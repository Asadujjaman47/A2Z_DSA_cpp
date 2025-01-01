// Find the highest/lowest frequency element

// Optimized approach(Using map)

#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    // Traverse through map to find the elements.
    for (auto it : map)
    {
        int count = it.first;
        int element = it.second;

        if (count > maxFreq)
        {
            maxEle = element;
            maxFreq = count;
        }

        if (count < minFreq)
        {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxFreq << "\n";
    cout << "The lowest frequency element is: " << minFreq << "\n";
}
// TC: O(N)
// SC: O(N)

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}