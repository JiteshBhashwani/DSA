#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        unsigned long sum{(nums.size()*(nums.size()+1))/2};
        
        for(int i = 0;i < nums.size();i++)sum-=nums.at(i);
        return sum;
    }
};