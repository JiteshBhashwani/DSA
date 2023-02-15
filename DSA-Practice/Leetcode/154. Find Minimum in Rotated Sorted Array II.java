class Solution {
    public int findMin(int[] nums) {
                int first = 0;
        int last = nums.length-1;
        while(first < last){
            int mid = first + (last - first) / 2;
            if(nums[last] < nums[mid]) first = mid + 1;
            else if(nums[last] > nums[mid]) last = mid; 
            else last -= 1;
        }
        return nums[last];
    }
}