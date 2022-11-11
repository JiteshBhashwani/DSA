#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> answer;
    int row = matrix.size();
    int col = matrix.at(0).size();
    int total = row * col;
    int rowStart = 0;
    int colStart = 0;
    int rowEnd = row - 1;
    int colEnd = col - 1;
    int printed{0};
    while (printed < total)
    {
        // right
        for (int i = colStart; i <= colEnd && printed < total; i++)
        {
            answer.push_back(matrix[rowStart][i]);
            printed++;
        }
        rowStart++;
        // down
        for (int i = rowStart; i <= rowEnd && printed < total; i++)
        {
            answer.push_back(matrix[i][colEnd]);
            printed++;
        }
        colEnd--;
        // left
        for (int i = colEnd; i >= colStart && printed < total; i--)
        {
            answer.push_back(matrix[rowEnd][i]);
            printed++;
        }
        rowEnd--;
        // up
        for (int i = rowEnd; i >= rowStart && printed < total; i--)
        {
            answer.push_back(matrix[i][colStart]);
            printed++;
        }
        colStart++;
    }
    return answer;
}
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int start = 0;
    int col = matrix[0].size();
    int end = (matrix.size() * matrix[0].size()) - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = matrix[mid / col][mid % col];
        if (element > target)
            end = mid - 1;
        else if (element < target)
            start = mid + 1;
        else
            return true;
    }
    return false;
}
bool searchMatrixII(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int x = 0;
    int y = col - 1;
    while (x < row && y >= 0)
    {
        if (matrix[x][y] == target)
            return true;
        else if (matrix[x][y] > target)
            y--;
        else
            x++;
    }
    return false;
}
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> answer;
    for (size_t i = 0; i < mCols; i++)
    {
        if (i & 1)
        {
            for (int j = nRows - 1; j >= 0; j--)
            {
                answer.push_back(arr[j][i]);
            }
        }
        else
        {
            for (size_t j = 0; j < nRows; j++)
            {
                answer.push_back(arr[j][i]);
            }
        }
    }
    return answer;
}
