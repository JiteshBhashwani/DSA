#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 
    bool check(vector<int>& nums) {
        int c{0};
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] > nums[(i+1)%nums.size()]) c++;
            if(c > 1) return false;
        }
        if(c > 1) return false;
        return true;
    }
};