// this problem is "binary tree inorder traversal"
// https://leetcode.com/problems/binary-tree-inorder-traversal/

// notes: need to study these more, shouldn't have taken more than 1min
// but was kinda difficult to resolve recursion issues

class Solution {
public:
  void traverse(TreeNode* root, vector<int>& ans) {
        if (!root) return;
        traverse(root->left, ans);
        ans.push_back(root->val);
        traverse(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);        
        return ans;
    }
};
