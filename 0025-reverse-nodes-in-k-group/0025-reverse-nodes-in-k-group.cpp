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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode*p=new ListNode(0),*q;
        q=p;
        while(head){
            v.push_back(head->val);
            head=head->next;
            
        }
        int s=v.size();
        int start=0,end=k;
        while(end<=s){
            reverse(v.begin()+start,v.begin()+end);
             cout<<end<<" "<<start<<endl;
            end+=k;
            start+=k;
           
        }
        // for(auto i:v){
        //     cout<<i<<endl;
        // }
        int i=0;
        while(i<s){
            ListNode *temp=new ListNode(v[i]);
            p->next=temp;
            p=p->next;
            i++;
        }
        return q->next;
    }
};