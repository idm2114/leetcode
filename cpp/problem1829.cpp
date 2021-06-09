// this problem is "maximum XOR for each query" 
// https://leetcode.com/problems/maximum-xor-for-each-query/

class Solution { 
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        unsigned int tmp = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            tmp = tmp ^ nums[i];
        }
        while(nums.size() != 0) {
            ans.push_back((~tmp & (int(1 << maximumBit)-1)));
            // very cool way of removing one value in xor
            // works bc xor is invertible
            tmp ^= nums[nums.size()-1];
            nums.pop_back();
        }
        return ans;
    }
}
