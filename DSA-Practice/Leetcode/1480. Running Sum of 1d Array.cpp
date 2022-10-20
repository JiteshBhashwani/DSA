#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumVec(nums.size());
         int sum{0};
         for(int i = 0;i < nums.size();i++)
         {
            sum+=nums[i];
            sumVec[i] = sum;
         }
         return sumVec;
    }
};