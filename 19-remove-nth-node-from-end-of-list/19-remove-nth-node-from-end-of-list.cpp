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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    vector<int> v;
        ListNode* temp=head;
        
        if(head==NULL){
            return NULL;
        }
        
        
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        if(v.size()==1){
            return NULL;
        }
        
        int s=v.size()-n;
        v.erase(v.begin()+s);
        // cout<<v.size();
    
        temp=head;
        
        int c=0;
        for (auto i:v){
            c+=1;
            temp->val=i;
            if (c==v.size()){
                temp->next=NULL;
            }else{
                            temp=temp->next;

            }
        }
        
        return head;
    }
};