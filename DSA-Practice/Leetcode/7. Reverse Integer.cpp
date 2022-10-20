#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        long reversed{0};
        while (x)
        {
            reversed = ((x % 10) + (reversed * 10));
            if (reversed > 2147483647 || reversed < -2147483648)
                return 0;

            x /= 10;
        }
        return reversed;
    }
};