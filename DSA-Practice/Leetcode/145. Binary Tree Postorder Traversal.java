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
    public void postOrder(TreeNode root, List<Integer> answer) {
        if(root != null){
            postOrder(root.left,answer);
            postOrder(root.right,answer);
            answer.add(root.val);
        } 
    }
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> answer  = new ArrayList<Integer>();
        postOrder(root,answer);
        return answer;
    }
}