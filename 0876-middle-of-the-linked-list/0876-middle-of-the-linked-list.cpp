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
    ListNode* middleNode(ListNode* head) {
        ListNode *fast=head,*slow=head;
        int check=0,count=0;
        while(fast){
            fast=fast->next;
            count++;
            if(check==1){
                slow=slow->next;
                check=0;
            }else{
                check=1;
            }
            
            
        }
        // if(count%2==0){
        //     slow=slow->next;
        // }
        return slow;
    }
};