// this problem is "add strings" 
// https://leetcode.com/problems/add-strings/

class Solution { 
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int carry = 0;
        while(num1 != "" || num2 != "" || carry) {
            char tmp1 = 0;
            char tmp2 = 0;
            if (num1 != "") {
                tmp1 = (int) (num1[num1.length()-1]) - 48;
                num1.erase(num1.length()-1, 1);
            }
            if (num2 != "") {
                tmp2 = (int) (num2[num2.length()-1]) - 48;
                num2.erase(num2.length()-1, 1);
            }
            ans = char(((tmp1 + tmp2 + carry) % 10) + 48) + ans;
            carry = (tmp1 + tmp2 + carry) / 10;
        }
        return ans;
    }
}
