#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer(n*2);
        int i = 0;
        int a = 0;
        int b = n;
        while (i < n*2)
        {
            answer[i++] = nums[a++];
            answer[i++] = nums[b++];
        }
        return answer; 
        }
};