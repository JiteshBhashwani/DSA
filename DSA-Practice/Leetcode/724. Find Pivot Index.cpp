#include <vector>
using std::vector;
class Solution {
public:
    int pivotIndex(vector<int> &nums)
    {
        int leftSum = 0;
        int rightSum = 0;
        for(auto&&i:nums)rightSum+=i;
        for(int i = 0;i < nums.size();i++)
        {
            rightSum-=nums[i];
            if(leftSum == rightSum) return i; 
            leftSum+=nums[i];
        }
        return -1;
    }
};