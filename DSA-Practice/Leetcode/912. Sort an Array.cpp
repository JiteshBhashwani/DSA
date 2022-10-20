#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void mergeSeg(std::vector<int>& v,int u,int d)
    {
        int mid = (u+d)/2;
        int segOne = mid-u+1;
        int segTwo = d-mid;
        int itToMainArr = u;

        std::vector<int> one(segOne,0);
        std::vector<int> two(segTwo,0);

        for (int i = 0; i < segOne; ++i) one[i] = v[itToMainArr++];
        for (int i = 0; i < segTwo; ++i) two[i] = v[itToMainArr++];

        itToMainArr = u;
        int i{0},j{0};
        while(i<segOne && j<segTwo) {
            if (one[i] < two[j])
            {
                v[itToMainArr++] = one[i++];
            }
            else
            {
                v[itToMainArr++] = two[j++];
            }
        }
        while(i<segOne)
        {
            v[itToMainArr++] = one[i++];	
        }
        while(j<segTwo)
        {
            v[itToMainArr++] = two[j++];	
        }
    }
    void mergeSort(std::vector<int>& v,int u,int d)
    {
        if(d-u > 0)
        {
            int mid = (u+d)/2;    //Getting mid
            mergeSort(v,u,mid);   //first Recursive call 
            mergeSort(v,mid+1,d); //second Recursive call
            mergeSeg(v,u,d);      //merging
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};