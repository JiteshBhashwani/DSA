#include<vector> 
using std::vector;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int f = 0;
        int l = nums.size()-1;
        while(f<l && nums[f]<nums[l])
        {
            int mid = (f+l)/2;
            if(nums[mid] < nums[0]) l = mid;
            else f = mid+1;
        }
        return nums[f];
    }
};