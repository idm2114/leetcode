// this problem is "merge two sorted lists" 
// https://leetcode.com/problems/merge-two-sorted-lists/

class Solution { 
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode tmp(0);
        ListNode *p = &tmp;
        ListNode *ans = p;
        while(l1 || l2) {
            if (!l1) {
                p->next = l2;
                l2 = l2->next;
            }
            else if (!l2) {
                p->next = l1;
                l1 = l1->next;
            }
            else {
                if (l1->val < l2->val) {
                    p->next = l1;
                    l1 = l1->next;
                }
                else {
                    p->next = l2;
                    l2 = l2->next;
                }
            }
            p = p->next;
        }
        return ans->next;
    }
}
