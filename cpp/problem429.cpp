// this problem is "n-ary tree level order traversal"
// https://leetcode.com/problems/n-ary-tree-level-order-traversal/

class Solution {
    void traverse(Node* root, vector<vector<int>>& ans, int level) {
        if (!root) return;
        if (level == ans.size()) ans.push_back({});
        ans[level].push_back(root->val);
        for (auto& x : root->children) traverse(x, ans, level+1);
    }

    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        traverse(root, ans, 0);
        return ans;
    }
};
