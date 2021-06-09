// this problem is "replace all digits with characters" 
// https://leetcode.com/problems/replace-all-digits-with-characters/

class Solution { 
public:
    string replaceDigits(string s) {
        for(int i = 1; i < s.length(); i+=2) {
            s[i] = (char)(stoi(s.substr(i,1)) + int(s[i-1]));
        }
        return s;
    }
}
