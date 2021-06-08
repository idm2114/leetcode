// this problem is "average of levels in binary tree"
// https://leetcode.com/problems/average-of-levels-in-binary-tree/

// notes: the solution I came up with used BFS, which felt logical at the time,
// but was incredibly slow and inefficient -- worth revisiting later

class Solution {
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<double>> ans;
        vector<double> finalans;
        queue<pair<TreeNode*,int>> q;
        q.push(pair<TreeNode*,int>(root,0));
        while(!q.empty()) {
            pair<TreeNode*,int>tmp = q.front();
            q.pop();
            if (tmp.second == ans.size()) ans.push_back({});
            ans[tmp.second].push_back(tmp.first->val);
            if (tmp.first->left) q.push(pair<TreeNode*, int>(tmp.first->left, tmp.second+1));
            if (tmp.first->right) q.push(pair<TreeNode*, int>(tmp.first->right, tmp.second+1));
        }
        for (auto& v : ans) {
            finalans.push_back(accumulate(v.begin(), v.end(), (double) 0 ) / (double) v.size());
        }
        return finalans;
    }
};
