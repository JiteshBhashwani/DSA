#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        // return ((n <= 1 ) ? n : fib(n-1)+fib(n-2));
        if(n<2)return n;
        else return fib(n-1) + fib(n-2);
        
    }
};