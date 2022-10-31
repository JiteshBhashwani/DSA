#include<vector> 
using std::vector;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int f = 0;
        int l = nums.size()-1;
        if(nums[f]<nums[l]) return nums[f];
        while(f<l)
        {
            int mid = (f+l)/2;
            if(nums[mid] < nums[0]) l = mid;
            else f = mid+1;
        }
        return nums[f];
    }
};