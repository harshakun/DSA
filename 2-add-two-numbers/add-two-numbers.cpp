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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dnode= new ListNode(0);
        int carry = 0;
        ListNode* temp = dnode; 
        while (l1!=nullptr || l2!=nullptr ||carry)
        {
            int sum = carry;
            if(l1!=nullptr)
            {
                sum = sum + l1->val;
                l1=l1->next;
                 }
             if(l2!=nullptr)
            {
                sum = sum + l2->val;
                l2=l2->next;
                 }
            ListNode* nn = new ListNode(sum%10);
            carry = sum/10;
            temp->next = nn;
            temp = nn;
            
        }return dnode->next;
    }
};