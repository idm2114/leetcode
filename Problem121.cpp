class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff;
        int m; 
        int tmp;
        diff = 0;
        m = 10000;
        for(int i = 0; i < prices.size(); i++) {
            tmp = prices[i];
            m = min(tmp, m);
            diff = max((tmp - m), diff);
        }
    return diff;    
    }
};
