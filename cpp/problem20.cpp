// this problem is "valid parentheses" 
// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
         for(int i = 0; i < s.length(); i++) {
             if (!st.empty()) {
                 if (s[i] == '}' && st.top() == '{'
                   || s[i] == ')' && st.top() == '('
                   || s[i] == ']' && st.top() == '[') {
                        st.pop();
                        continue;
                 }
             }
             st.push(s[i]);
         }
         return (st.empty()) ? true : false;
    }
};
