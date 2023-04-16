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
    public static int ans = Integer.MIN_VALUE;
    public static int diameterOfBinaryTree(TreeNode root) {
        ans = Integer.MIN_VALUE;
        solve(root);
        return ans;
    }
    public static int solve(TreeNode root) {
        if(root == null) return 0;
        int left = solve(root.left);
        int right = solve(root.right);
        ans = Math.max(left + right, ans);
        return Math.max(left,right) + 1;
    }
}