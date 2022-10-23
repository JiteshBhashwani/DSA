#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int> &nums)//dp O(n^2)
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
    int minJumps(int arr[], int n)//greedy O(n)
    {
        int jumps{0};
        int nextMax{0};
        int currentMax{0};
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            nextMax = max(nextMax,arr[i]+i);
            if(nextMax >= n-1) return ++jumps;
            if(i == nextMax) return -1;
            if(i == currentMax) 
            {
                jumps++;
                currentMax = nextMax;
            }
        }
    }

};