// this problem is "permutations"
// https://leetcode.com/problems/permutations/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        perm(nums, 0, ans);
        return ans;
    }
    void perm(vector<int>& nums, int begin, vector<vector<int>>& ans) {
        if (begin >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i = begin; i < nums.size(); i++) {
            swap(nums[begin], nums[i]); // permute 1 number
            perm(nums, begin+1, ans);
            swap(nums[begin], nums[i]); // swap it back
        }
    }
};
