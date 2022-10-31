#include <bits/stdc++.h> 
using std::vector;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0;
    int j = 0;
    vector<int> answer;
    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else 
        {
            answer.push_back(arr1[i]);
            i++;j++;
        }
    }
    return answer;
}
