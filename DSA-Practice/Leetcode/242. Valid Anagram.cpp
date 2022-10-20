#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int hash[26]{0};
        int uc{0};
        for(int i = 0;i < s.size();i++)
        {
            int indexS = s[i]-'a';
            int indexT = t[i]-'a';
            hash[indexS]++;
            if(hash[indexS] == 1)uc++;
            hash[indexT]--;
            if(hash[indexT] == 0)uc--;
        }
        return !uc;
    }
};