class Solution {
public:
    
    int findMin(vector<int>& nums) {
        
        if(nums.size() == 1) {
            return nums[0];
        }
        
        int begin = 0;
        int len = nums.size();
        int end = len-1;
        
        // if begin is less than end, must already be sorted
        if (nums[end] > nums[begin])
            return nums[begin];
        
        while (begin <= end) {
            int mid = begin + (end-begin) / 2;
            
            // if element in left spot is greater than element in right,
            // rotation point found, return mid+1 (rotation point)
            if (nums[mid] > nums[mid+1]) {
                return nums[mid+1];
            }
            
            // if element in left spot is greater than element in right,
            // rotation point found, return mid (rotation point)
            if (nums[mid-1] > nums[mid]) {
                return nums[mid];
            }
            
            // change search parameters, cutting search size in half each time
            if(nums[mid] > nums[0]) {
                begin = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return -1;
    }
};
