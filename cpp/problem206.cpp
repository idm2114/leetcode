// this problem is "reverse a linked list" 
// https://leetcode.com/problems/reverse-linked-list/

// notes: worth practicing

class Solution { 
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* tmp = head;
        ListNode* q = nullptr;
        ListNode* r = nullptr;
        while(tmp) {
            r = q;
            q = tmp;
            tmp = tmp->next;
            q->next = r;
        }
        return q;
    }
}
