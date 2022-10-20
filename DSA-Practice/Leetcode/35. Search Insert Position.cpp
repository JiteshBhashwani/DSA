#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {    
        if(nums[0] > target) return 0;
        if(nums[nums.size()-1] < target) return nums.size();
        int top{0};
        int bot{(int)nums.size()};
        while(top<bot)
        {
            int mid = (top+bot)/2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] > target)
            {
                bot = mid-1;
            }
            else
            {
                top = mid+1;
            }
        }
	if(nums[top] >= target) return top;
	return top+1;
	
    }
};