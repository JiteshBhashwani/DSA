#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max{0};
        for (auto &&i : accounts)
        {
            int temp{0};
            for (auto &&j : i)
            {
                temp += j;
            }
            if (temp > max)
                max = temp;
        }
        return max;
    }
};