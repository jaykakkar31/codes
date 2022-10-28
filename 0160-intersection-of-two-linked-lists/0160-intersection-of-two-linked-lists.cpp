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
        int a=0,b=0;
        ListNode *l1=heada,*l2=headb;
        while(l1){
            a+=1;
            l1=l1->next;
        }
        while(l2){
            b+=1;
            l2=l2->next;
        }
        int diff=abs(a-b);
        l1=heada;
        l2=headb;
        
        if (a>b){
            while(diff){
                l1=l1->next;
                diff-=1;
            }    
        }else if(b>a){
            while(diff){
                l2=l2->next;
                diff-=1;
            }
        }
        while(l1 and l2){
            if (l1==l2){
                return l1;
            }
            l1=l1->next;
            l2=l2->next;
        }
        return NULL;
    }
};