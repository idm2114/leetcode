// this problem is "longest increasing subsequence" 
// https://leetcode.com/problems/implement-strstr/

class Solution { 
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>ans(nums.size());
        ans[0] = 1;
        for(int i = 1; i < nums.size(); i++) {
            ans[i] = 1;
            for(int j = 0; j < i; j++) {
                // increasing subsequence,
                if (nums[i] > nums[j] && ans[i] < ans[j]+1) {
                    ans[i] = ans[j]+1;
                }
            }
        }
        return *max_element(ans.begin(), ans.end());
    }
}
