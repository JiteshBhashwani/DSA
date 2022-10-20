#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0)return false;
    unsigned int rev = 0;
    int og = x;
    while (x != 0)
    {
        rev = (rev*10)+(x%10);
        x/=10;
    }
    return (og == rev);      
    }
};