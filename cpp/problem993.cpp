// this problem is "cousins in binary tree"
// https://leetcode.com/problems/cousins-in-binary-tree/

class Solution {
    bool isCousins(TreeNode* root, int x, int y) {
        bool cousin = false;
        bool siblings = false;
        if (!root) return 0;
        queue<TreeNode*>q, q1;
        q.push(root);
        while(!q.empty() && !cousin) {
            while(!q.empty()) {
                TreeNode* tmp = q.front();
                q.pop();
                if (!tmp) siblings = false;
                else {
                     if (n->val == x || n->val == y) {
                          if (!cousin) cousin = siblings = true;
                          else return !siblings;
                     }
                     q1.push(n->left), q1.push(n->right), q1.push(nullptr);
                }
            }
            swap(q, q1);
        }
        return false;
    }
};
