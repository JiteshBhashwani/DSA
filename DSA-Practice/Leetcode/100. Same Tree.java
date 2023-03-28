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
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if(p == null && q == null) return true;
        if(p == null || q == null) return false;
        boolean isSameForLeft = isSameTree(p.left,q.left);
        boolean isSameForRight = isSameTree(p.right,q.right);
        return isSameForLeft && isSameForRight && (q.val == p.val);
    }
}