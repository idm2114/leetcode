// this problem is permutations II 
// https://leetcode.com/problems/permutations-ii/

// notes: I cheated on this problem by using unordered set, should've
// probably solved the whole thing with backtracking. Will revise

class Solution {
public:
    struct VectorHash {
    size_t operator()(const std::vector<int>& v) const {
        std::hash<int> hasher;
        size_t seed = 0;
        for (int i : v) {
            seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
        return seed;
    }
    };
    using mySet = std::unordered_set<vector<int>, VectorHash>;
    void perm(vector<int>& nums, int begin, mySet& st) {
        if (begin >= nums.size()) {
            st.insert(nums);
            return;
        }
        for(int i = begin; i < nums.size(); i++) {
            swap(nums[i], nums[begin]);
            perm(nums, begin+1, st);
            swap(nums[i], nums[begin]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        mySet st;
        perm(nums, 0, st);
        for(auto& x : st) ans.push_back(x);
        return ans;
    }
};
