// this problem is "jump game II" 
// https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
     int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        vector<int>ans(nums.size());
        for(auto& x : ans) x = INT_MAX-1;
        ans[0] = 0;
        for(int i = 0; i < nums.size(); i++) {
            int j = 1;
            while(i + j < nums.size() && j <= nums[i]) {
                ans[i + j] = min(ans[i + j], ans[i] + 1);
                j++;
            }
        }
        return ans[ans.size()-1];
    }
};
