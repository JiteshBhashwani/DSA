#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    pair<vector<int>, vector<int>> helper(const vector<int> &input)
    {
        int size = input.size();
        vector<int> left(size);
        stack<int> stk;
        for (int i = 0; i < size; i++)
        {
            while (!stk.empty() && input[stk.top()] >= input[i])
                stk.pop();
            left[i] = stk.empty() ? -1 : stk.top();
            stk.push(i);
        }
        vector<int> right(size);
        stack<int> stk2;
        for (int i = size - 1; i >= 0; i--)
        {
            while (!stk2.empty() && input[stk2.top()] >= input[i])
                stk2.pop();
            right[i] = stk2.empty() ? size : stk2.top();
            stk2.push(i);
        }
        return {left, right};
    }
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        if(matrix.empty()) return 0;
        int height = matrix.size();
        int width = matrix[0].size();
        int ans{INT_MIN};
        vector<int> temp(width);
        for (size_t i = 0; i < height; i++)
        {
            for (size_t j = 0; j < width; j++)
            {
                temp[j] = (matrix[i][j] == '1') ? temp[j] + 1 : 0;
            }
            auto dist = helper(temp);
            for (size_t j = 0; j < width; j++)
            {
                int x = dist.second[j] - dist.first[j] - 1;
                ans = max(ans, temp[j] * x);
            }
        }
        return ans;
    }
};