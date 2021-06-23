// this problem is "convert sorted array to binary search tree"
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution { 
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;
        if (nums.size() == 1) return new TreeNode(nums[0]);

        TreeNode* root = new TreeNode(nums[nums.size()/2]);
        vector<int> left = vector<int>(nums.begin(), nums.begin()+nums.size()/2);
        vector<int> right = vector<int>(nums.begin()+nums.size()/2 + 1, nums.end());
        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);
        return root;
    }
}
