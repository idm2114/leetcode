// this problem is "string to integer (atoi)" 
// https://leetcode.com/problems/string-to-integer-atoi/

// notes: totally not worth doing, just has a bunch of annoying edge cases

class Solution {
public:
    int myAtoi(string s) {
        long a = 0;
        int last = 0; // 0 represents space, 1 represents sign, 2 represents num
        bool neg = false;
        for(int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (last == 0) continue;
                else {
                    if (neg) a *= -1;
                    return a;
                }
            }
            if (s[i]=='+') {
                if (last != 0) {
                    if (neg) a *= -1;
                    return a;
                }
                last = 1;
                continue;
            }
            if (s[i] == '-') {
                if (last != 0) {
                    if (neg) a *= -1;
                    return a;
                }
                neg = true;
                last = 1;
                continue;
            }
            if ((int)s[i] >= 48 && (int)s[i] <= 57) {
                last = 2;
                a *= 10;
                a += (int)s[i] - 48;
            }
            else{
                break;
            }
            
            if (a > INT_MAX) {
                if (neg) return INT_MIN;
                else return INT_MAX;
            }
        }
        if (neg) a *= -1;
        return a;
    }
};
