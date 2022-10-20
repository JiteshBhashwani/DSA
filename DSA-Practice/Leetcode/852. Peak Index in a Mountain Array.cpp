#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int top = 0;
        int bot = arr.size() - 1;
        int mid = top + (bot - top) / 2;
        while (top <= bot)
        {
            if (arr[mid] < arr[mid + 1])
            {
                top = mid + 1;
            }
            else
            {
                bot = mid - 1;
            }
            mid = top + (bot - top) / 2;
        }
        return top;
    }
};