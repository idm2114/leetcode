// this problem is "binary tree level order traversal"
// https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution {
    void traverse(TreeNode* root, vector<vector<int>>& ans, int level) {
        if (!root) return;
        if (level == ans.size()) ans.push_back({});
        ans[level].push_back(root->val);
        traverse(root->left, ans, level+1);
        traverse(root->right, ans, level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        traverse(root, ans, 0);
        return ans;
    }
};
