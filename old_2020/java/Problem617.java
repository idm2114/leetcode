class Solution {
    public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
        if (t1 == null && t2 == null) {
            return null;
        }
        TreeNode output = new TreeNode();
        
        if (t1 != null && t2 != null) {
            output.val = t1.val + t2.val;
            output.left = mergeTrees(t1.left, t2.left);
            output.right = mergeTrees(t1.right, t2.right);
        }
        if (t1 == null) {
            return t2;
        }
        if (t2 == null) {
            return t1;
        }
        return output;
    }
}
