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
    bool hasCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
        // if(slow==fast){
        //     return false;
        // }
        if(slow==NULL){
            return false;
        }
        while(fast&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
            
        }
        return false;
        
        
        // vector<ListNode*> ans;
        // while(head){
        //     if (find(ans.begin(),ans.end(),head->next)!=ans.end()){
        //         return true;
        //     }else{
        //         ans.push_back(head);
        //     }
        //     head=head->next;
        // }
        // return false;
    }
};