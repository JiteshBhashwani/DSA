#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        unsigned int power{1};
        for (int i = 0; i < 31; i++)
        {
            if (n == power)
                return true;
            power *= 2;
        }
        return false;
    }
};