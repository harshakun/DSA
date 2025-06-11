/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        ListNode * fast = head;
        while(n--)
        {
            fast =fast->next;
        }
        if(!fast)
        {ListNode* prev= head;
        head=head->next;
        delete(prev);
        return head;

        }
        ListNode* slow = head;
        ListNode* prev;
        while(fast)
        {   prev = slow;
            slow = slow->next;
            fast =fast->next;
        }
        ListNode* temp = slow;
        prev->next = slow->next;
        delete(temp);
        return head;
        
    }
};