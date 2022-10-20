#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   vector<int> plusOne(vector<int>& digits) {
    
        vector<int> answer;
    int last = digits.size() - 1;
    int sum{digits[last--] + 1};
    int carry{sum / 10};
    sum = sum % 10;
    answer.push_back(sum);
    while ((last >= 0))
    {
        sum = digits[last--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        answer.push_back(sum);
    }
    if(carry)answer.push_back(carry);
    reverse(answer.begin(),answer.end());
    return answer;
   }
};