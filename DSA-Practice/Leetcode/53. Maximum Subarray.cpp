#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum, maxSum;
        currentSum = maxSum = nums[0];
        for(int i = 1;i < nums.size();i++)
        {
            if(currentSum < 0)
            {
                currentSum = nums[i];
            }
            else currentSum += nums[i];
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;
    }
};