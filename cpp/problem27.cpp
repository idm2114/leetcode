// this problem is "remove element" 
// https://leetcode.com/problems/remove-element/

// notes: algorithm must be O(1) additional memory 

class Solution { 
public:
    int removeElement(vector<int>& nums, int val) {
        return distance(nums.begin(), remove(nums.begin(), nums.end(), val));
    }
}
