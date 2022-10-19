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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0,temp=0;
        vector<int> v1,v2;
        
        while(l1){
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2){
            v2.push_back(l2->val);
            l2=l2->next;
        }
        // reverse(v1.begin(),v1.end());
        // reverse(v2.begin(),v2.end());
        if (v1.size()<v2.size()){
            int diff=v2.size()-v1.size();
            for(int i=0;i<diff;i++){
                v1.push_back(0);
            }
        }
        if (v1.size()>v2.size()){
            int diff=v1.size()-v2.size();
            for(int i=0;i<diff;i++){
                v2.push_back(0);
            }
        }
        vector<int> ans(v2.size());
        
        
        for(int i=0;i<v1.size();i++){
            temp=v1[i]+v2[i]+c;
            c=0;
            if (temp>9){
                c=1;
                ans[i]=temp%10;
                
            }else{
                ans[i]=temp;
            }
            cout<<ans[i]<<" ";
        }
        if(c==1){
            ans.push_back(c);
        }
        ListNode *p, *t=new ListNode(0);
        p=t;
        for(auto i : ans){
            // ListNode *s=new Node(i);
            t->next=new ListNode(i);
            t=t->next;
        }
        // for(auto i:ans){
        //     cout<<i<<" ";
        // }
        return p->next;
        
    }
};