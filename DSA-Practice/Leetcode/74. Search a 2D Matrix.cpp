#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int f{0};
        int l = (matrix.size())*(matrix[0].size())-1;
        int row = matrix.size();
        int col = matrix[0].size();
        // int x{-1};
        while(f<=l)
        {
            int mid = l + (f-l)/2;
            // int mid_element = *(*matrix+mid);
            int mid_element = matrix[mid/col][mid%col];
            
            if(mid_element == target) return true;
            else if(mid_element < target)f = mid+1;
            else l = mid-1;
        }
        return 0;
    }
};