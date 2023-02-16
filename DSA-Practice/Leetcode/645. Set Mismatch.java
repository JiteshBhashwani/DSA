class Solution {
    public void swap(int[] nums, int x, int y){
        int temp = nums[x];
        nums[x] = nums[y];
        nums[y] = temp;
    }
    public int[] findErrorNums(int[] nums) {
        int i = 0;
        while(i < nums.length){
            int correctIndex  = nums[i] - 1;
            if(nums[correctIndex] == nums[i]) i++;
            else swap(nums,correctIndex,i); 
        }
        for(i = 0;i < nums.length;i++){
            if(nums[i] != i+1) return new int[]{nums[i],i+1};
        }
        return new int[]{-1,-1};
    }
}