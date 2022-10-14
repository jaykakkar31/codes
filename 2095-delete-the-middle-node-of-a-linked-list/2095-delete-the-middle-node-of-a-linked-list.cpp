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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * temp=head,*prev;
        int count=0,i=0;
        while(temp){
            count+=1;
            temp=temp->next;
        }
        if(count==1){
            return NULL;
        }
        int mid=count/2;
        // cout<<mid;
        temp=head;
        while(temp){
            if(i==mid){
                cout<<prev->val<<" "<<temp->val;
                prev->next=temp->next;
            }
            i+=1;
            prev=temp;
            temp=temp->next;
            
        }
        return head;
    }
};