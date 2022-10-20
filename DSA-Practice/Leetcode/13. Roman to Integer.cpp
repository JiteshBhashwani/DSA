#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getVal(char c)
    {
        switch (c)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }
        return 0;
    }

    int romanToInt(string input)
    {
        int sum{0};
        for (size_t i = 0; i < input.size(); i++)
        {
            int current = getVal(input[i]);
            int next = getVal(input[i + 1]);
            if (current < next)
            {
                sum += (next - current);
                i++;
            }
            else
            {
                sum += current;
            }
        }
        return sum;
    }
};