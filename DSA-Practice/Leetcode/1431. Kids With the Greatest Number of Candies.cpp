#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx{INT_MIN};
        for(auto&&i:candies)mx=max(mx,i);
        vector<bool> answer;
        for(auto&&i:candies)answer.push_back((i+extraCandies)>=mx);
        return answer;
    }
};