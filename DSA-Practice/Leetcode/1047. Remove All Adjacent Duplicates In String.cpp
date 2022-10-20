#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string& s) {
        int j = -1;
        for (int i = 0; i < s.size(); ++i)
            {
                if(j < 0)
                {
                    s[0] = s[i];
                    j=0;
                }
                else if(s[j] != s[i])
                {
                    s[++j] = s[i];
                }
                else j--;
            }  
        
        return s.substr(0,j+1);		
    }
};