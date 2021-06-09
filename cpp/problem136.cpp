// this problem is "single number" 
// https://leetcode.com/problems/single-number/

// notes: must be O(n) time and O(1) space

class Solution { 
public:
    int singleNumber(vector<int> nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            ans ^= nums[i]; // xor of (a ^ a) = 0, so only non-doubled will remain
        }
        return ans;
    }
}
