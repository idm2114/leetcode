// this problem is "maximum number of coins you can get" 
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// notes: general strategy is create tuple (min, one less than max, max)

class Solution { 
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end()); // sort coins ascending
        int sum = 0;
        int i = 0;
        int n = piles.size();
        while(i < (n / 3)) {
            piles.pop_back();
            sum += piles[piles.size()-1];
            piles.pop_back();
            i++;
        }
        return sum;
    }
}
