// this problem is "group anagrams" 
// https://leetcode.com/problems/group-anagrams/

class Solution { 
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(int i = 0; i < strs.size(); i++) {
            string lex = strs[i];
            sort(lex.begin(), lex.end());
            if (mp.find(lex) != mp.end()) mp[lex].push_back(strs[i]);
            else {
                mp.insert({lex, {strs[i]} });
            }
        }
        for(auto& x : mp) {
            ans.push_back(x.second);
        }
        return ans;
    }
};
