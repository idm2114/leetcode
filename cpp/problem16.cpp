// this problem is "threesum closest" 
// https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = INT_MAX;
        int closest_so_far = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                for(int k = j+1; k < nums.size(); k++) {
                    if (i != j && j != k && i != k) {
                        int total = nums[i] + nums[j] + nums[k];
                        int dist = abs(target - total);
                        if (dist <= closest_so_far) {
                            closest_so_far = dist;
                            ans = total;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
