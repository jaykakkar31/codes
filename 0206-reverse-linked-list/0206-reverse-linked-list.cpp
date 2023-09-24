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
    ListNode* reverseList(ListNode* head) {
        ListNode  *curr=NULL,*next=head,*temp;
        if(head==NULL){
            return head;
        }
        while(next){
            temp=next;
            next=next->next;
            // temp=next;
            temp->next=curr;
            curr=temp;
            
            
                
            
        }
        return curr;
    }
};