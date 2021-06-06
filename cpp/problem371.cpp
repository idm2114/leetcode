// this problem is "longest substring without repeated characters" 
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution { 
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp; // hashset to check if character already seen
        int max_len = 0;
        int current = 0;
        for(int i = 0; i < s.length(); i++) {
            if(mp.find(s[i]) == mp.end()) {
                current += 1;
            }
            else {
                if (current > max_len) max_len = current;
                current = 1;
                // moving index backward to last instance of repeated char
                i = mp[s[i]];
                mp.clear();
            }
            mp[s[i]] = i+1;
        }
        return max(max_len,current);
    }
}
