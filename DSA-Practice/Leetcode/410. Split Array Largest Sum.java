// public class 410. Split Array Largest Sum {
    
// }
class Solution {
    public int splitArray(int[] nums, int k) {
        if(nums.length == k){ // edge case
            int x = 0;
            for(int i: nums) x = Integer.max(x,i);
            return x;
        }
        int minPossible = 0;
        int maxPossible = 0;
        int ans = 0;
        for(int i: nums) maxPossible += i;
        if(k==nums.length) return maxPossible;
        while(minPossible <= maxPossible){
            int mid = minPossible + (maxPossible - minPossible) / 2;
            boolean isPossible = predicate(nums,k,mid);
            if(isPossible){
                ans = mid;
                maxPossible = mid-1;
            }
            else minPossible = mid+1;
        }
        return ans;
    }
    private boolean predicate(int[] nums, int k, int test) {
        int soFar = 0;
        for (int num : nums) {
            if (soFar + num <= test) soFar += num;
            else {
                k--;
                soFar = num;
                if (k == 0 || soFar > test) return false;
            }
        }
        return true;
    }

}
