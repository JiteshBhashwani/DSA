#include <vector>
using std::vector;
class Solution {
public:
    int firstOc(vector<int> arr,int size,int key)
    {
        int answer = -1;
        int f = 0;
        int l = size-1;
        while(f<=l)
        {
            int mid = (f+l)/2;
            int midElement = arr[mid];
            if(midElement < key) f = mid+1;
            else if(midElement > key) l = mid-1;
            else 
            {
                answer = mid;
                l = mid-1;
            }
        }
        return answer;
    }
    
    int lastOc(vector<int> arr,int size,int key)
    {
        int answer = -1;
        int f = 0;
        int l = size-1;
        while(f<=l)
        {
            int mid = (f+l)/2;
            if(arr[mid] < key) f = mid+1;
            else if(arr[mid] > key)l = mid-1;
            else 
            {
                answer = mid;
                f = mid+1;
            }
        }
        return answer;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOc(nums,nums.size(),target),lastOc(nums,nums.size(),target)};    
    }
};