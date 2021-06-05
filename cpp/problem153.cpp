// this problem is "find minimum in rotated sorted array" 
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

// notes: algorithm must be O(logn) 
// idea: binary search 
// goal is to find a place where left number > right number
// then we will know we have found minimum

class Solution { 
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int left = 0;
        int right = nums.size()-1;
        if (nums[right] > nums[0]) return nums[0]; // no rotation
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid+1]) {
                return nums[mid+1];
            }
            if (nums[mid-1] > nums[mid]) {
                return nums[mid];
            }
            if (nums[mid] > nums[0]) { // in sorted part of array
                left = mid + 1;
            }
            else {
                right = mid-1;
            }
        }
        return -1;
    }
}
