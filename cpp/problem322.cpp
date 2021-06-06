// this problem is "coin change" 
// https://leetcode.com/problems/coin-change/

class Solution { 
public:
    int coinChange(vector<int>& coins, int amount) {
        int max = amount + 1;
        // initialize answer vector
        vector<int> ans(amount+1, max);
        ans[0] = 0;
        for(int i = 1; i <= amount; i++) {
            for(int j = coins.begin(); j < coins.end(); j++) {
                if (coins[j] <= i) {
                    ans[i] = min(ans[i], ans[i - coins[j]] + 1);
                }
            }
        }
        return ans[amount] < max ? ans[amount] : -1;
    }
}
