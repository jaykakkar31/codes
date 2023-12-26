/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         ListNode *slow=head,*fast=head;
         if(slow==NULL||slow->next==NULL) return NULL;
        
         while(fast&&fast->next){
             fast=fast->next->next;
             slow=slow->next;
             if(slow==fast) break;
             if(slow==NULL||fast==NULL) return NULL;
         }
        ListNode*p=head;
        while(p&&slow){
            if(p==slow)
                return p;
            p=p->next;
            slow=slow->next;
        }
        return NULL;
    }
};