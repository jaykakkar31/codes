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
        int count=0;
        ListNode *temp=head;
        while(temp){
            temp=temp->next;
            count+=1;
        }
        temp=head;
        int mid=count/2;
        while(mid--){
            temp=temp->next;
        }
        return temp;
    }
};