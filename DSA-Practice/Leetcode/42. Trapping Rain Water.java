// public class 42. Trapping Rain Water {
    
// }
class Solution {
    public int trap(int[] height) {
        int[] a = new int[height.length];
        int[] b = new int[height.length];
        int maxL = Integer.MIN_VALUE;
        int maxR = Integer.MIN_VALUE;
        for(int i = 0;i < height.length;i++){
            maxR = Math.max(maxR,height[height.length-1-i]);
            maxL = Math.max(maxL,height[i]);
            a[i] = maxL;
            b[height.length-1-i] = maxR;
        }
        int sum = 0;
        for (int i = 0; i < height.length; i++) {
            sum += Math.min(a[i],b[i]) - height[i];
        }
        return sum;
    }
}