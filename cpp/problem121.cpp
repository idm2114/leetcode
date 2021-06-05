// this problem is "best time to buy and sell stock" 
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution { 
public:
    int maxProfit(vector<int>& prices) {
        // can be solved with dynamic programming
        int maxsofar = 0;
        int current = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < current) {
                current = prices[i];
            }
            else { 
                if (prices[i] - current > maxsofar) {
                    maxsofar = prices[i] - current;
                }
            }
        if (maxsofar < 0) return 0;
        return maxsofar;
    }
}
