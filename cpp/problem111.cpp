// this problem is "minimum depth of binary tree"
// https://leetcode.com/problems/minimum-depth-of-binary-tree/

class Solution {
    void traverse(TreeNode* root, int& current, int depth) {
        if (!root->left && !root->right) {
            if (current > depth) current = depth;
            return;
        }
        if (root->left) traverse(root->left, current, depth+1);
        if (root->right) traverse(root->right, current, depth+1);
    }
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        int current = INT_MAX;
        traverse(root, current, 1);
        return current;
    }
};
