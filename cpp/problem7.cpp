// this problem is "reverse integer" 
// https://leetcode.com/problems/reverse-integer/

class Solution { 
public:
    int reverse(int x) {
        int ans = 0;
        string tmp = to_string(abs(x));
        std::reverse(tmp.begin(), tmp.end());
        try {
            ans = stoi(tmp);
        }
        catch (...) {
            return 0;
        }
        return (x < 0) ? ans*-1 : ans;
    }
}
