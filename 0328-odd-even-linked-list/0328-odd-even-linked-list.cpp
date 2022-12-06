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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>v1,v2;
        ListNode* temp=head;
        int i=0;
        while(temp){
            if(i==0){
                v1.push_back(temp->val);
                i=1;
            }else{
                v2.push_back(temp->val);
                i=0;
            }
            temp=temp->next;
            
        }
        v1.insert(v1.end(),v2.begin(),v2.end());
        temp=head;
        i=0;
        while(temp){
            temp->val=v1[i++];
            temp=temp->next;
            
        }
        return head;
    }
};