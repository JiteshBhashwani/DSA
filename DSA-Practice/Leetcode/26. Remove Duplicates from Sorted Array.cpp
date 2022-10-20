#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int numOfDups{0};
        for(int i = 0;i < nums.size()-1;i++)
        {
            if(nums.at(i) == nums.at(i+1))
            {
                nums.at(i) = INT_MAX;
                numOfDups++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-numOfDups;
    }
};