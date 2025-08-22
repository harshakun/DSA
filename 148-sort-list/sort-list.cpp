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
    ListNode* sortList(ListNode* head) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> pq;
        while(head)
        {
            pq.push({head->val,head});
            head = head->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        while(!pq.empty())
        {   
            cur->next = pq.top().second;
            pq.pop();
            cur=cur->next;
            cur->next = nullptr;
            
        }
        return dummy->next;
        
    }
};