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
    ListNode *temp;
    bool check(ListNode*head){
        if(head==NULL) return true;
        bool res=check(head->next) &&temp->val==head->val;
        temp=temp->next;
        return res;
    }
    bool isPalindrome(ListNode* head) {
        temp=head;
        return check(head);
        // vector<int> v;
        // ListNode *temp=head;
        // while(temp){
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int start=0,end=v.size()-1;
        // while(start<end){
        //     if(v[start]!=v[end]){
        //         return false;
        //     }
        //     start+=1;
        //     end-=1;
        // }
        // return true;
        
    }
};