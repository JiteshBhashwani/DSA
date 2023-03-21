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
    public static heightAndBalanceStat isBalancedHelper(TreeNode root){
        if(root == null) 
            return new heightAndBalanceStat(true, 0);
        heightAndBalanceStat left = isBalancedHelper(root.left);
        heightAndBalanceStat right = isBalancedHelper(root.right);
        boolean condition = Math.abs(left.height-right.height) <= 1;
        return new heightAndBalanceStat(left.isBalanced && right.isBalanced && condition,(Math.max(left.height, right.height))+1);
    }
    public boolean isBalanced(TreeNode root) {
        return isBalancedHelper(root).isBalanced;
    }
}
class heightAndBalanceStat{
    public boolean isBalanced;
    public int height;

    public heightAndBalanceStat(boolean isBalanced, int height) {
        this.isBalanced = isBalanced;
        this.height = height;
    }
}