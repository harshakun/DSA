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
    
    ListNode* merge(ListNode* first, ListNode* sec)
    {ListNode * dummy = new ListNode(0);
    ListNode* temp = dummy;
        if(!first) return sec;
        while(first && sec)
        {if(first->val<sec->val)
        {
            temp->next = first;
            temp = temp->next;
            first = first->next;
        }
        else {
            temp->next = sec;
            temp = temp->next;
            sec = sec->next;
        }

        }
        if(first) temp->next=first;
        if(sec) temp->next = sec;
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        ListNode* ans = nullptr;
        for(int i=0;i<n;i++)
        {
            ans = merge(ans,lists[i]);
        }
        return ans;

        
    }
};