// this problem is "sqrt(x)" 
// https://leetcode.com/problems/sqrtx/

// notes: this solution was awful in terms of time complexity

class Solution { 
public:
    int mySqrt(int x) {
        for(long i = 0; i <= x; i++) {
            if (i*i == x) return (int)i;
            else if (i*i > x) return (int)i-1;
        }
        return 0;
    }
};
