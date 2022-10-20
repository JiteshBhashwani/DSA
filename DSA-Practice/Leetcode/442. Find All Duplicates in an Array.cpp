#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> dups;
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                dups.push_back(nums[i++]);
        }
        return dups;
    }
};