import java.util.Deque;
import java.util.LinkedList;

// public class 239. Sliding Window Maximum {
    
// }
class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int[] answer = new int[nums.length + 1 - k]; int i = 0;
        Deque<Integer> deque = new LinkedList<>();
        int front = 0, back = 0;
        while(front < nums.length){
            while(!deque.isEmpty() && deque.peekLast() < nums[front]) deque.pollLast();
            deque.add(nums[front]);
            if(front - back + 1 == k){
                answer[i++] = deque.isEmpty()? 0: deque.peek();
                if(deque.peek() == nums[back]) deque.poll();
                back++;
            }
            front++;
        }
        return answer;
    }
}