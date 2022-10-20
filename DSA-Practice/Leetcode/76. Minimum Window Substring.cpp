#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int len = INT_MAX;
        int answerIndex = 0;
        unordered_map<char,int> hash;
        for (auto &&i : t) hash[i]++;
        int uniqueChars = hash.size();

        for (size_t front = 0,back = 0; front < s.size(); front++)
        {
            if(t.find(s[front]) < t.size())
            {
                hash[s[front]]--;
                if(hash[s[front]] == 0) uniqueChars--;
            }
            if(!uniqueChars)
            {
                while (!uniqueChars)
                {
                    if(len > front-back+1)
                    {
                        len = front-back+1;
                        answerIndex = back;
                    }
                    if (t.find(s[back]) < t.size())
                    {
                        hash[s[back]]++;
                        if(hash[s[back]] == 1)uniqueChars++;
                    }                   
                    back++;
                }       
            }
        }
        return string{((len!=INT_MAX)?s.substr(answerIndex,len):"")};
    }

};