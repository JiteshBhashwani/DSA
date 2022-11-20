#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 3) return nums.size();
        int numOfDups{0};
        for(int i = 0;i < nums.size()-2;i++)
        {
            if(nums.at(i) == nums.at(i+1) && nums.at(i+1) == nums.at(i+2))
            {
                nums.at(i) = INT_MAX;
                numOfDups++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-numOfDups;
    }
};