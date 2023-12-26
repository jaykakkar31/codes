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
        //head reaches last and temp moves forward
        bool res=check(head->next)&&head->val==temp->val;
        temp=temp->next;
        return res;
    }
    bool isPalindrome(ListNode* head) {
        temp=head;
        return check(head);
    }
};