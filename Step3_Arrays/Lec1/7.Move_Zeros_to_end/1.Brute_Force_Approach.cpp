// Move all Zeros to the end of the array

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(vector<int> arr, int n)
{

    // temporary array:
    vector<int> temp;
    // copy non-zero elements
    // from original -> temp array:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }

    // number of non-zero elements.
    int nz = temp.size();

    // copy elements from temp
    // fill first nz fields of
    // original array:
    for (int i = 0; i < nz; i++)
    {
        arr[i] = temp[i];
    }

    // fill rest of the cells with 0:
    for (int i = nz; i < n; i++)
    {
        arr[i] = 0;
    }

    return arr;
}
// Time Complexity: O(2*N)
// Space Complexity: O(N)

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