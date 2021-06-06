// this problem is "climbing stairs" 
// https://leetcode.com/problems/climbing-stairs/

class Solution { 
public:
    int climbStairs(int n) {
        vector<int> ans(n+1);
        ans[0] = 0;
        ans[1] = 1;
        for(int i = 2; i < n; i++) {
            ans[i] = max(ans[i-1]+ans[i-2], i);
        }
        return ans[n];
    }
}
