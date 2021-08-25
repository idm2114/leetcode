/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        // use bfs
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int maxval = INT_MIN;
        int current = 0;
        int lastLevel = 1;
        int bestLevel = 1;
        while(!q.empty()) {
            pair<TreeNode*,int> node = q.front();
            q.pop();
            if (node.first->left != nullptr) {
                q.push({node.first->left, node.second+1});
            }
            if (node.first->right != nullptr) { 
                q.push({node.first->right, node.second+1});
            }
            if (lastLevel != node.second) {
                if (current > maxval) {
                    maxval = current;
                    bestLevel = lastLevel;
                }
                current = node.first->val;
                lastLevel = node.second;
            }
            else current += node.first->val;
        }
        return (current > maxval) ? lastLevel : bestLevel;
    }
};
