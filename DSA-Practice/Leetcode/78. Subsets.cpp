#include <vector>
using std::vector;
class Solution
{
public:
    void helper(vector<int> &input, vector<int> output, vector<vector<int>> &answer, int index)
    {
        if (index == input.size())
        {
            answer.push_back(output);
            return;
        }
        helper(input, output, answer, index + 1);
        output.push_back(input[index]);
        helper(input, output, answer, index + 1);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> answer;
        vector<int> output;
        helper(nums, output, answer, 0);
        return answer;
    }
};