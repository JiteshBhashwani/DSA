
import java.util.ArrayList;
import java.util.List;

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
    public static void preOrder(TreeNode root, List<Integer> answer){
        if(root != null){
            answer.add(root.val);
            preOrder(root.left,answer);
            preOrder(root.right,answer);
        }
    }
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> answer  = new ArrayList<Integer>();
        preOrder(root,answer);
        return answer;
    }
}