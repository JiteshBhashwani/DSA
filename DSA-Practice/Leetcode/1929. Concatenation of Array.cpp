#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer(nums.size());
        for(int i = 0;i < nums.size();i++)
        {
            answer[i] = nums[i];
            answer.push_back(nums[i]);
        }
        
        return answer;
    }
};