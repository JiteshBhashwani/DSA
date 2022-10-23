#include <algorithm>
using namespace std;
int minJumps(int arr[], int n)//greedy O(n)
{
    int jumps{0};
    int nextMax{0};
    int currentMax{0};
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        nextMax = max(nextMax,arr[i]+i);
        if(nextMax >= n-1) return ++jumps;
        if(i == nextMax) return -1;
        if(i == currentMax) 
        {
            jumps++;
            currentMax = nextMax;
        }
    }
}