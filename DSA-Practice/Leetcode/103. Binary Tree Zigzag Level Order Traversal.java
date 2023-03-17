import java.util.*;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> answer = new ArrayList<>();
        if(root == null) return answer;
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        int x = 1;
        while(!queue.isEmpty()){
            List<Integer> temp = new ArrayList<>();
            int size = queue.size();
            for (int i = 0; i < size; i++) {
                root = queue.poll();
                temp.add(root.val);
                if(root.left != null) queue.offer(root.left);
                if(root.right != null) queue.offer(root.right);
            }
            if(x++%2 == 0)  Collections.reverse(temp);
            answer.add(temp);
        }
        return answer;
    }
}