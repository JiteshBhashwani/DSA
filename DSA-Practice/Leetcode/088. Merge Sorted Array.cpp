#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int lastfilledin1 = m-1;
       for(int i = 0;i < n;i++)
       {
            int j = lastfilledin1;
            for(;j >= 0;j--)
            {
                if(nums1[j]>nums2[i])
                {
                    nums1[j+1] = nums1[j]; 
                }
                else break;
            }
            nums1[j+1] = nums2[i];
           lastfilledin1++;
        }
        
        
    }
};