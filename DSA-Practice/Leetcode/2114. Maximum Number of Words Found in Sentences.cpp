#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int mostWordsFound(vector<string> &sentences)
    {
        int mx{0};
        for (auto &&i : sentences)
        {   
            int tempmx{1};
            for (size_t j = 0; j < i.size(); j++)
            {
                if(i[j] == ' ')tempmx++;
            }
            mx = max(mx,tempmx);
        }
        return mx;
    }
};