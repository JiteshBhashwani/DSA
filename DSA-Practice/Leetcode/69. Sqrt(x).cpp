#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long int mySqrt(int x) {
        int ans{-1};
        int top{0};
        int bot{x};
        while(top<=bot)
        {
            long long mid = (((top+0ll)+(bot+0ll)))/2;
            if(mid*mid == x)
            {
                return mid;
            }
            else if(mid*mid < x)
            {
                ans = mid;
                top = mid+1;
            }
            else
            {
                bot = mid-1;
            }
        }
        return ans;
    }
};