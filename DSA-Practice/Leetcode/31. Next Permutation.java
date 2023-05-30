class Solution {
    public void nextPermutation(int[] nums) {
        int pivotOne = -1;
        for (int i = nums.length -1; i > 0; i--) {
            if(nums[i] > nums[i-1]) {
                pivotOne = i - 1;
                break;
            }
        }
        if(pivotOne == -1) {
            reverse(nums,0,nums.length-1);
            return;
        }
        for (int i = nums.length -1; i > 0; i--) {
            if(nums[i] > nums[pivotOne]) {
                swap(nums, i, pivotOne);
                break;
            }
        }
        reverse(nums,pivotOne + 1, nums.length - 1);
    }
    public static void reverse(int[] array, int start, int end) {
        while(start < end) {
            swap(array,start++,end--);
        }
    }
    public static void swap(int[] array, int x, int y) {
        int temp = array[x];
        array[x] = array[y];
        array[y] = temp;
    }
}