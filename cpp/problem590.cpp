// this problem is "n-ary tree postorder traversal"
// https://leetcode.com/problems/n-ary-tree-postorder-traversal/

class Solution {
    void traverse(Node* root, vector<int>& ans) {
        if (!root) return;
        for (auto& x : root->children)
            traverse(x, ans);
        ans.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
};
