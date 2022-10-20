#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int search(vector<int>& nums, int target) {
        int pev;
        if(nums[0] > nums[nums.size()-1])
        {
            int f{0};unsigned long l{nums.size()-1};
            while(f<l)
            {
                int mid = (f+l)/2;
                if(nums[mid] < nums[l]) l = mid;
                else f = mid+1;
            }
            pev = l;
            int f1{0};int l1{pev};
            while(f1 <= l1)
            {
                int mid = (f1+l1)/2;
                if(nums[mid] == target) return mid;
                else if(nums[mid] < target) f1 = mid+1;
                else l1 = mid-1;
            }
        }
        else pev = 0;
        int f2{pev};
        int l2 = nums.size()-1;
        while(f2<=l2)
        {
            int mid = (f2+l2)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) f2 = mid+1;
            else if(nums[mid] > target) l2 = mid-1;
        }
        return -1;
    }
};