// this problem is "remove duplicates from sorted array" 
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// notes: this solution was awful in terms of time complexity O(n^2 worst case)

class Solution { 
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        for(int i = 0; i < nums.size()-1; i++) {
            if (nums[i] == *max_element(nums.begin(), nums.end())) return i+1;
            if (nums[i] < nums[i+1]) continue;
            int j = i+1;
            while(nums[i] >= nums[j]) {
                j++;
            }
            swap(nums[i+1], nums[j]);
        }
        return nums.size();
    }
}
