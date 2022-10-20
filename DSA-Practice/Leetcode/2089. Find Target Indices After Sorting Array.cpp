#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> answers;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] == target)answers.push_back(i);
            // if(nums[i] > target)break;
        }
        return answers;
    }
};