// this problem is "maximum subarray" 
// https://leetcode.com/problems/maximum-subarray/

class Solution { 
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar = INT_MIN;
        int current = 0;
        for(int i = 0; i < nums.size(); i++) {
            current += nums[i];
            if (nums[i] > current) current = nums[i];
            if (current > maxsofar) maxsofar = current;
            else {
                if (current < 0) current = 0;   
            }
        }
        return maxsofar;
    }
}
