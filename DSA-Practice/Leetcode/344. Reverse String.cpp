#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int f = 0;
        int l = s.size()-1;
        while(f<l)
        {
            int temp = s[f];
            s[f] = s[l];
            s[l] = temp;
            f++;l--;
        }
    }
};