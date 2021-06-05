// this problem is "search in rotated sorted array" 
// https://leetcode.com/problems/search-in-rotated-sorted-array/

// notes: algorithm must be O(logn) 
// this was a complete pain to code (too many cases), but worth practicing

class Solution { 
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left <= right) {
            int mid=(left + right) / 2;
            if(target==nums[mid])
                return mid;
            // if left < current
            else if(nums[left] <= nums[mid]) {
                // target is between left and current
                if(target>=nums[left] && target<nums[mid])
                    right=mid-1;
                else
                    left=mid+1;
            }
            else {
                // target is between current and right
                if(target <= nums[right] && target > nums[mid])
                    left=mid+1;
                else
                    right=mid-1;
            }
        }
        return -1;
    }
}
