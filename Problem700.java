class Solution {
    
    public TreeNode ans = new TreeNode();
    public TreeNode searchBST(TreeNode root, int val) {
        if (root == null) {
            ans = null;
            return ans;
        }
        if (root.val > val) {
            searchBST(root.left, val);
        }
        else if (root.val < val) {
            searchBST(root.right, val);
        }
        else {
            if (root.val == val) {
                ans = root;
            }
        }
        return ans;
    }
}
