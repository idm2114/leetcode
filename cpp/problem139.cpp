// this problem is "word break" 
// https://leetcode.com/problems/word-break/

class Solution { 
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool>ans(s.length()+1,false);
        ans[0] = true;
        for(int i = 1; i <= s.length(); i++) {
            for(int j = 0; j < i; j++) {
                if (ans[j] == true) {
                    string tmp = s.substr(j,i-j);
                    for(auto k = wordDict.begin(); k < wordDict.end(); k++) {
                        if (tmp == *k) ans[i] = true;
                    }
                }
            }
        }
        return ans[s.length()];
    }
}
