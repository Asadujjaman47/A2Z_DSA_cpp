// Count Maximum Consecutive One's in the array

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int cnt = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            maxi = max(maxi, cnt);
        }

        return maxi;
    }
};

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum consective 1's are " << ans;
    return 0;
}

// Time Complexity: O(N) since the solution involves only a single pass.

// Space Complexity: O(1) because no extra space is used.