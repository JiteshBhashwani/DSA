#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPivot(vector<int>& arr)
    {
        int f = 0;
        int l = arr.size()-1;
        while(f<l)
        {
            int mid = (f+l)/2;
            if(arr[mid] < arr[0]) l = mid;
            else f = mid+1;
        }
        return f;
    }
    int binarySearch(vector<int>& arr,int k,int f,int l)
    {
        if(f>l) return -1;
        int mid = (f+l)/2;
        if(arr[mid] < k) return binarySearch(arr,k,mid+1,l);
        else if(arr[mid] > k) return binarySearch(arr,k,f,mid-1);
        return mid;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findPivot(nums);
        if(nums[pivot] <= target && target <= nums[n-1]) return binarySearch(nums,target,pivot,n-1);
        return binarySearch(nums,target,0,pivot-1);
    }
};