#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums)
    {
       int zero{0};
       int nat{nums[0]?1:0};
       while (zero < nums.size() && nat < nums.size())
       {
          if(nums[zero] == 0)
          {
             if(nums[nat] != 0)
             {
                swap(nums[zero++],nums[nat++]);
             }
             else
             {
                nat++;
             }
          }
          else
          {
             zero++;
             nat++;
          }
       }


    }
};