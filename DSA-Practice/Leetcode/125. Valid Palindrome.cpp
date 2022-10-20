#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string treverse(const string &s)
    {
       string k;
       for (int i = (s.size()-1); i >= 0; i--)
       {
          if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) 
             k.push_back(s[i]);
          if (s[i] >= 'A' && s[i] <= 'Z')
             k.push_back('a' + (s[i] - 'A'));
       }
       return k;
    }
    bool isPalindrome(string& s) {
        string k = treverse(s);
        int f = 0;
        int l = k.size() - 1;
        while (f < l)
        {
          if (k[f++] != k[l--])
             return false;
        }
        return true;
        }
};