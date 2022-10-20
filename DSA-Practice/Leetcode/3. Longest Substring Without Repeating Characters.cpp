#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> charCount;
        int uc{0},mx{0},ans{0};
        for (size_t front = 0,back = 0; front < s.size(); front++)
        {
            charCount[s[front]]++;
            if (charCount[s[front]] == 1)
            {
                uc++;
            }
            // if(charCount[s[front]] > 1)
            // {
                while(charCount[s[front]] > 1)
                {
                    charCount[s[back]]--;
                    if(charCount[s[back]] == 0)uc--;
                    back++;
                }
            // }
            if(mx < uc)
            {
                mx = uc;
                ans = front-back+1;
            }

        }
        return  ans;
    }
};