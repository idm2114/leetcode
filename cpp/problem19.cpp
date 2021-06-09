// this problem is "remove nth node from end of list" 
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution { 
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int pos = 0;
        int len = 0;
        ListNode* p = head;
        while(p) {
            len++;
            p = p->next;
        }
        pos = len - n; // getting index to remove
        len = 0;
        p = head;
        while(p) {
            if (len == pos && len == 0) return head->next; // only if both are 0
            if (len+1 == pos) {
                p->next = ((p->next)->next) ? (p->next)->next : nullptr;
            }
            p = p->next;
            len++;
        }
        return head;
    }
}
