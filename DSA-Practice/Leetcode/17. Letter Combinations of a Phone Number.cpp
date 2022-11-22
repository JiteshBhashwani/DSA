#include<string>;
#include<vector>;
using std::string;
using std::vector;
class Solution {
public:
vector<string> keypad{
    "",
    "",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

void solve(string digits, vector<string> &answer, string output = "", int index = 0)
{
    if (index == digits.size())
    {
        answer.push_back(output);
        return;
    }
    string keys = keypad[digits[index]-'0'];
    for (int i = 0; i < keys.size(); i++)
    {
        solve(digits, answer, output + keys[i], index + 1);
    }
}
vector<string> letterCombinations(string digits)
{
    vector<string> answer;
    if(digits.size())solve(digits, answer);
    return answer;
}
};