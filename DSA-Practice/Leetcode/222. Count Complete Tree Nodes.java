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
    public int countNodes(TreeNode root) {
        if(root == null) return 0;
        int nodesOnLeftSide = countNodes(root.left);
        int nodesOnRightSide = countNodes(root.right);
        return nodesOnLeftSide + 1 + nodesOnRightSide; 
    }
}