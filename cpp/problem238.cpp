// this problem is "product of array except self" 
// https://leetcode.com/problems/product-of-array-except-self/

// notes: algorithm must be O(n) and cannot use division operator
// answer[i] will fit in 32bit int

class Solution { 
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size);
        fill(ans.begin(), ans.end(), 1); // all values are 1 to start
        vector<int> right(nums.size);
        fill(ans.begin(), ans.end(), 1); // all values are 1 to start
        // passing through the left array
        for(int i = 1; i < nums.size(); i++) {
            left[i] = left[i-1] * left[i-1];
        }
        // passing through the right array
        for(int j = nums.size()-2; j >= 0; j--) {
            right[j] = right[j+1] * right[j+1];
        }
        for(int k = 0; k < left.size(); k++) {
            left[k] = left[k] * right[k];
        }
        return left;
    }
}
