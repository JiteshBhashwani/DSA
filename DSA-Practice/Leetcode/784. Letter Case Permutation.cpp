#include<vector>
#include<string>
using std::vector;
using std::string;
class Solution
{
public:
    char changeCase(char ch)
    {
        if (ch >= 'a' & ch <= 'z')
            return 'A' + (ch - 'a');
        else
            return 'a' + (ch - 'A');
    }
    void solve(vector<string> &answer, string input, string output = "", int index = 0)
    {
        if (index >= input.size())
        {
            answer.push_back(output);
            return;
        }
        while (input[index] >= '0' && input[index] <= '9' && index < input.size())
            output.push_back(input[index++]);
        solve(answer, input, output + input[index], index + 1);
        char changed = changeCase(input[index]);
        if (index < input.size())
            solve(answer, input, output + changed, index + 1);
    }

    vector<string> letterCasePermutation(string s)
    {
        vector<string> answer;
        solve(answer, s);
        return answer;
    }
};