#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int up{0}, mid{0};
        long low = nums.size() - 1;
        while (mid <= low)
        {
            if (nums[mid] == 0)
                swap(nums[up++], nums[mid++]);
            else if (nums[mid] == 1)
                mid++;
            else
                swap(nums[mid], nums[low--]);
        }
    }
};