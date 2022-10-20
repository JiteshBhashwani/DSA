#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count{0};
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] == val)
            {
                count++;   
                nums[i] = 101;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-count;
    }
};