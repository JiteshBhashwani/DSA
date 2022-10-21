#include<bits/std++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int> &nums)
    {
        vector<int> dp(nums.size(),INT_MAX);
        dp[0] = 0;
        for (size_t i = 1; i < nums.size(); i++)
        {
            for (size_t j = 0; j < i; j++)
            {
                if(nums[j]+j >= i)
                {
                    if(dp[j] + 1 < dp[i]) dp[i] = dp[j] + 1; 
                }
            }

        }
        return dp[nums.size()-1];
    }
};