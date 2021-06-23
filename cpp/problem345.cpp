// this problem is "reverse vowels" 
// https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution { 
public:
    bool isVowel(char input) {
        input = tolower(input);
        return (input == 'a' || input == 'e' || input == 'i' 
                    || input == 'o' || input == 'u') ? true : false;
    }
    string reverseVowels(string s) {
        int i = 0; 
        int j = s.length()-1;
        while(i < j) {
            if (isVowel(s[i])) {
                if (isVowel(s[j])) {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                else {
                    j--;
                }
            }
            else if (isVowel(s[j])) {
                i++;
            }
            else {
                i++;
                j--;
            }
        }
        return s;
    }
}
