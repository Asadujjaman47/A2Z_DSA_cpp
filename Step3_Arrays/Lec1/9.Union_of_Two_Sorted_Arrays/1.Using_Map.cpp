// Union of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    map<int, int> freq;
    vector<int> Union;
    for (int i = 0; i < n; i++)
        freq[arr1[i]]++;
    for (int i = 0; i < m; i++)
        freq[arr2[i]]++;
    for (auto &it : freq)
        Union.push_back(it.first);
    return Union;
}
// Time Compleixty : O( (m+n)log(m+n) )
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