// this problem is "binary tree postorder traversal"
// https://leetcode.com/problems/binary-tree-postorder-traversal/

class Solution {
    void traverse(TreeNode *root, vector<int>& ans) {
        if (!root) return;
        traverse(root->left, ans);
        traverse(root->right, ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
};
