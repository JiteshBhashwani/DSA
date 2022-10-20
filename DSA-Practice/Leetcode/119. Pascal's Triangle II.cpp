#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        if (rowIndex == 0)
            return {1};
        if (rowIndex == 1)
            return {1, 1};
        if (rowIndex == 2)
            return {1, 2, 1};
        vector<int> prev{1, 3, 3, 1};
        for (size_t j = 4; j <= rowIndex; j++)
        {
            vector<int> ans{1};
            for (size_t i = 1; i <= prev.size() - 1; i++)
            {
                ans.push_back(prev[j - i - 1] + prev[j - i]);
            }
            ans.push_back(1);
            prev = ans;
        }
        return prev;
    }
};