#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1},{1,1}};
        vector<vector<int>> pascal{{1},{1,1}};
        for (size_t i = 1; i < numRows-1; i++)
		{
			vector<int> row{1};
			for (size_t j = 0; j < i; j++)
			{
				row.push_back(pascal[i][j]+pascal[i][j+1]);
			}
			row.push_back(1);
			pascal.push_back(row);
		}
        return pascal;
    }
};