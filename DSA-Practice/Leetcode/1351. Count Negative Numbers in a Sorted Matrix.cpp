#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count{0};
        for(auto&& vec:grid)
        {
            // sort(vec.begin(),vec.end());
            for(int i = 0;i < vec.size();i++)
            {
                if(vec[i] < 0)count++;
                // else break;
            }
        }
        return count;
    }
};