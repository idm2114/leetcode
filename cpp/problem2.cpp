// this problem is "add two numbers" 
// https://leetcode.com/problems/add-two-numbers/

// notes: was slightly hard to remember calling conventions for pointer
// versus struct (-> vs .), worth practicing just to brush up on 

class Solution { 
public:
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode ans(0);
        ListNode* p = &ans;
        while(l1 || l2 || carry) {
            int tmp = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry);
            carry = tmp / 10;
            p->next = new ListNode(tmp % 10);
            p = p->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return ans.next;
    }
}
