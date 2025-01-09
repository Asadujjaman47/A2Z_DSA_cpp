// Move all Zeros to the end of the array

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(vector<int> arr, int n)
{
    int j = -1;
    // place the pointer j:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // no non-zero elements:
    if (j == -1)
        return arr;

    // Move the pointers i and j
    // and swap accordingly:
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();
    vector<int> ans = moveZeros(arr, n);
    for (auto &it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}