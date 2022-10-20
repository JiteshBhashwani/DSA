#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int answer{0};
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i][1] == '+')
                answer++;
            else
                answer--;
        }
        return answer;
    }
};