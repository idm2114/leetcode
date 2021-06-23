// this problem is "maximum performance of a team" 
// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/603/week-1-june-1st-june-7th/3768/

class Solution { 
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> tmp(n);
        for(int i = 0; i < n; i++) {
            tmp[i] = {efficiency[i], speed[i]};
        }
        sort(tmp.begin(), tmp.end());
        long sum = 0;
        long res = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto& [e, s]: tmp) {
            pq.emplace(s); // add speed to pq
            sum += s;
            if (pq.size() > k) { // too many engineers
                sum -= pq.top();
                pq.pop(); // remove lowest efficiency engineer
            }
            res = max(res, sum * e);
        }
        return res % (int)(1e9+7);
    }
}
