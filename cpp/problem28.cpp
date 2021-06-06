// this problem is "implement strStr" 
// https://leetcode.com/problems/implement-strstr/

class Solution { 
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0; // needle is null 
        if (haystack == "") return -1; // haystack is null
        if (needle.length() > haystack.length()) return -1;
        for(int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substring(i, needle.length()) == needle) return i;
        }
        return -1;
    }
}
