class Solution {
    public void swap(int[] nums, int x, int y){
        int temp = nums[x];
        nums[x] = nums[y];
        nums[y] = temp;
    }
    public int firstMissingPositive(int[] nums) {
        int i = 0;
        while(i < nums.length){
            int correctIndex = nums[i] - 1;
            if(0 < nums[i] && nums[i] < nums.length){
                if(nums[correctIndex] != nums[i]){
                    swap(nums,correctIndex,i);
                }
                else i++;
            }
            else i++;
        }
        for(i = 0;i < nums.length;i++){
            if(i+1 != nums[i]) return i+1;
        }
        return i+1;
    }
}
