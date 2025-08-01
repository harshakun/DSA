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
    void reorderList(ListNode* head) {
        if(head==nullptr ||head->next == nullptr) return;
        ListNode* slow = head;
        ListNode* fast =head;
        while(fast!=nullptr && fast->next!= nullptr)
        {
            slow =slow->next;
            fast =fast->next->next;

        }
        ListNode* prev = nullptr;
        ListNode* cur = slow->next;
        while(cur)
        {
            ListNode* temp = cur->next;
            cur->next =prev;
            prev = cur;
            cur = temp;
        }
        slow ->next =nullptr;
        ListNode* first = head;
        ListNode* second = prev;
        while (second) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;

            first->next = second;
            second->next = tmp1;

            first = tmp1;
            second = tmp2;
        }
    }
};