// this problem is "majority element"
// https://leetcode.com/problems/majority-element/

class Solution { 
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int begin = 0;
        int last = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != nums[0]) last = nums[i];
            if (i - begin >= nums.size() / 2) return nums[i];
        }
        return 0;
    }
}
