// public class 190. Reverse Bits {
    
// }
class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int x) {
        int front = 0;
        int back = 31;
        int answer = 0;
        while(front<back){
            if((x&1<<back) != 0) answer = answer | 1<<front;
            if((x&1<<front) != 0) answer = answer | 1<<back;
            front++;back--;
        }
        return answer;
    }
}