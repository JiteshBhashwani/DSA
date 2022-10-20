#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int i{0},j{2};
        int count{0};
        while((i+2)<s.size())
        {
          if ((s[i] != s[i+1]) && (s[i] != s[j]) && (s[i+1] != s[j]) )
          {
             count++;
          }
          i++;j++;
        }
        return count;
    }
};