#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        // vector<int> ans(nums.size());
        int ans[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[nums[i]];
        }
        return vector<int>(ans, ans + nums.size());
    }
};