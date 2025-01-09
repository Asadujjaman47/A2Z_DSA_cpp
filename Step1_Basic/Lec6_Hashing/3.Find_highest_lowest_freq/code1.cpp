// Find the highest/lowest frequency element

// Approach: Brute-Force approach(Using two loops)

#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{

    vector<bool> visited(n, false);
    int minEle = 0, minFreq = n;
    int maxEle = 0, maxFreq = 0;

    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }

        if (count > maxFreq)
        {
            maxEle = arr[i];
            maxFreq = count;
        }
        if (count < minFreq)
        {
            minEle = arr[i];
            minFreq = count;
        }
    }

    cout << "The highegst frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

// TC: O(N*N)
// SC: O(N)

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}