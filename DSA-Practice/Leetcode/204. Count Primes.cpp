#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int countPrimes(int n) {
        int ans{0};
        vector<bool> isPrime(n+2, true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 0;i < n;i++)
        {
            if(isPrime[i])
            {
                ans++;
                for(long j = i*1l*i;j < n;j+=i)
                {
                    isPrime[j] = false;
                }
            }
        }
        return ans;
    }
};