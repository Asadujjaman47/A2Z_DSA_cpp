// Union of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;  // pointers
    vector<int> Union; // Uninon vector

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) // IF any element left in arr1
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }

    while (j < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }

    return Union;
}
// Time Complexity: O(m+n),
// Space Complexity : O(m+n)

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is " << "\n";
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}