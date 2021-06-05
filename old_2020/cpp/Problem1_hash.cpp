class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                ans.push_back(mp[nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mp[target-nums[i]] = i;
        }
        return ans;
    }
};
