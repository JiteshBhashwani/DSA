#include <vector>
using std::vector;
class Solution
{
public:
    void solve(vector<vector<int>> &answer, vector<int> input, vector<int> output = {}, int index = 0)
    {
        if (index == input.size())
        {
            answer.push_back(input);
            return;
        }
        for (int i = index; i < input.size(); i++)
        {
            std::swap(input[i], input[index]);
            solve(answer, input, output, index + 1);
            std::swap(input[i], input[index]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> answer;
        solve(answer, nums);
        return answer;
    }
};