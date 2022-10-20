#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prev{strs[0]};
        for (int i = 1; i < strs.size(); i++)
        {
            string ans;
            int j{0};
            while ((strs[i][j] == strs[i - 1][j]) && (strs[i][j]) && (strs[i - 1][j]))
            {
                ans.push_back(strs[i][j++]);
            }
            if (prev.size() > ans.size())
                prev = ans;
        }
        return prev;
    }
};