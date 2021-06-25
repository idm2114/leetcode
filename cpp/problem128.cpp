// this problem is "longest consecutive sequence" 
// https://leetcode.com/problems/longest-consecutive-sequence/

class Solution { 
public:
      int longestConsecutive(vector<int>& nums) {
        // idea: use priority queue?
        // add all elements, then pop them one by one
        if (nums.size() == 0) return 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto& x : nums) pq.push(x);
        int last = pq.top()-1;
        int len = 0;
        int ans = 0;
        while(!pq.empty()) {
            if (pq.top() == last+1) {
                len++;
                ans = max(ans, len);
            }
            else if (pq.top() == last) {
                ;
            }
            else {
                cout << pq.top() << endl;
                ans = max(ans, len);
                len = 1;
            }
            last = pq.top();
            pq.pop();
        }
        return max(ans,len);
    }
}
