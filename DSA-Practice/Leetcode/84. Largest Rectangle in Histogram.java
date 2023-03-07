import java.util.Stack;

class Solution {
    private static int[] indexOfNSL(int[] arr){
        int[] answer = new int[arr.length];
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < arr.length; i++) {
            while (!stack.empty() && arr[stack.peek()] >= arr[i]) stack.pop();
            answer[i] = stack.empty()? -1: stack.peek();
            stack.push(i);
        }
        return answer;
    }
    private static int[] indexOfNSR(int[] arr){
        int[] answer = new int[arr.length];
        Stack<Integer> stack = new Stack<>();
        for (int i = arr.length-1; i >= 0; i--) {
            while (!stack.empty() && arr[stack.peek()] >= arr[i]) stack.pop();
            answer[i] = stack.empty()? arr.length: stack.peek();
            stack.push(i);
        }
        return answer;
    }


    public static int largestRectangleArea(int[] heights) {
        int[] nsl = indexOfNSL(heights);
        int[] nsr = indexOfNSR(heights);
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < heights.length; i++) {
            int span = nsr[i] - nsl[i] - 1;
            max = Math.max(max, heights[i] * span);
        }
        return max;
    }
}