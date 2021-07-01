// this problem is "search insert position" 
// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
      int binary(vector<int> nums, int target, int low, int high)  {
        while(high > low) {
            int mid = (high + low) / 2;
            if (target > nums[mid]) {
                return binary(nums, target, mid+1, high);
            }
            else if (target < nums[mid]) {
                return binary(nums, target, low, mid-1);
            }
            else if (target == nums[mid]) return mid;
        }
        // note that the max(high, low) is necessary becuase either
        // high or low could be -1 but not both!
        return (target > nums[max(high, low)]) ? max(high,low)+1 : max(high,low);
    }
    int searchInsert(vector<int>& nums, int target) {
        return binary(nums, target, 0, nums.size()-1);
    }
};
