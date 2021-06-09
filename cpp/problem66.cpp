// this problem is "remove duplicates from sorted array" 
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// notes: this solution was awful in terms of time complexity O(n^2 worst case)

class Solution { 
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        bool added = false;
        for(int i = digits.size()-1; i >= 0; i--) {
            if (added == true && carry == 0) return digits;
            else if (added == true && carry == 1) {
                int sum = (digits[i] + 1);
                digits[i] = sum % 10;
                carry = sum / 10;
            }
            else {
                int sum = (digits[i] + 1 + carry);
                added=true;
                digits[i] = sum % 10;
                carry = sum / 10;
            }
        }
        if (carry == 1) digits.insert(digits.begin(), 1);
        return digits;
    }
}
