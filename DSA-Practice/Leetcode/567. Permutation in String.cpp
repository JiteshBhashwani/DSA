#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        map<char,int> hash;
        for (size_t i = 0; i < s1.size(); i++)
        {
            hash[s1[i]]++;
        }
        int uc = hash.size();
        int mainLen = s2.size();
        int windowSize = s1.size();
        for (size_t front = 0,back = 0; front < mainLen; front++)
        {
            if(s1.find(s2[front]) < windowSize)
            {
                hash[s2[front]]--;
                if(hash[s2[front]] == 0)uc--;
            }
            if(uc == 0) return true;
            if (front-back+1 == windowSize)
            {
                if(s1.find(s2[back])<windowSize)
                {
                    hash[s2[back]]++;
                    if(hash[s2[back]] == 1)uc++;
                }
                back++;
            }

        }

        return 0;
    }

};