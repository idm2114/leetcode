// this problem is "cointainer with most water" 
// https://leetcode.com/problems/container-with-most-water/

// notes: although not explicitly stated, timeout error if solution is O(n^2)

class Solution { 
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int *p1 = &height[0];
        int *p2 = p1 + height.size()-1;
        while(p1 < p2) {
            if (*p1 < *p2) {
                ans = max(ans, (int)(min(*p1, *p2) * (p2 - p1)));
                p1++;
            }
            else {
                ans = max(ans, (int)(min(*p1, *p2) * (p2 - p1)));
                p2--;
            }
        }
        return ans;
    }

}
