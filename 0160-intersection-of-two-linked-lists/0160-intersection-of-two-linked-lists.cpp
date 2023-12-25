/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        ListNode *p1=heada,*p2=headb;
        if(p1==NULL&&p2==NULL){
            return NULL;
        }
        if(p1==p2){
            return p1;
        }
        while(p1!=NULL&&p2!=NULL&&p1!=p2){
            p1=p1->next;
            p2=p2->next;
            if(p1==p2) return p1;
            
            if(p1==NULL) p1=headb;
            if(p2==NULL) p2=heada;
        }
        return p1;
    }
};