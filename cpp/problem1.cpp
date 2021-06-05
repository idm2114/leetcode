// this problem is twosum
// https://leetcode.com/problems/two-sum/

class Solution { 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // use one pass hash map: key stores nums[i], value stores index
        unordered_map<int,int> mp; 
        vector<int> ans; 
        for(int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                return ans;
            }
            else {
                mp.insert(pair<int,int>(nums[i], i));
            }
        }
        return ans;
    }
}
