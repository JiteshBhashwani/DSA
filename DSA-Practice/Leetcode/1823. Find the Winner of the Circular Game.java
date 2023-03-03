import java.util.LinkedList;

// public class 1823. Find the Winner of the Circular Game {
    
// }
class Solution {
    public static int findTheWinner(int n, int k) {
        k--;
        LinkedList<Integer> list = new LinkedList<>();
        for (int i = 1;i <= n;i++) list.add(i);
        return solveForTheWinner(list,k,0);
    }

    private static int solveForTheWinner(LinkedList<Integer> list, int jump, int jumpingPos) {
        if(list.size() == 1) return list.peek();
        int kill = (jumpingPos + jump) % list.size();
        list.remove(kill);
        return solveForTheWinner(list,jump,kill);
    }
}