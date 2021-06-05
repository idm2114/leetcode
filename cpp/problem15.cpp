// this problem is "3sum" 
// https://leetcode.com/problems/3sum/

class Solution { 
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); // sort numbers
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i; 
        }
        int i = 0; 
        int j = 1;
        while(i < nums.size()) {
            if (nums[i] > 0) break;
            while( j < nums.size()) {
                int sum = nums[i] + nums[j];
                // if the complement of 2sum is in map
                if (mp.find(-sum) != mp.end() && mp[-sum] > j) {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(-sum);
                    ans.push_back(tmp); // adding to answer vector
                }
                j = mp[nums[j]] + 1; // increasing index
            }
            i = mp[nums[i]] + 1; // increasing i 
            j = i+1; // resetting j 
        }
        return ans;
    }

}
