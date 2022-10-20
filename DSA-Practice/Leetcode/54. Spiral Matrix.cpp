#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int lastCol = matrix[0].size()-1;
        int lastRow = matrix.size()-1;
        int firstCol = 0;
        int firstRow = 0;
        int count = (lastCol+1)*(lastRow+1);
        std::vector<int> answer;
        while(count)
        {
        	//printing box sides
        	//top
        		for (int i = firstCol;i <= lastCol && count > 0; ++i)
        		{
        			answer.push_back(matrix[firstRow][i]);
        			count--;
        		}
        		// break;
        		firstRow++;
        	//right
        		for (int i = firstRow; i <= lastRow && count > 0; ++i)
        		{
        		 	answer.push_back(matrix[i][lastCol]);
        			count--;
        		}
        		lastCol--;
        	//bot
                for (int i = lastCol; i >= firstCol && count > 0; --i)
        		{
        		 	answer.push_back(matrix[lastRow][i]);
        			count--;
        		}
        		lastRow--;
        	//left
                for (int i = lastRow; i >= firstRow && count > 0; --i)
        		{
        		 	answer.push_back(matrix[i][firstCol]);
        			count--;
        		}
        		firstCol++;
        // 		break;
        }
        return answer;
    }

};