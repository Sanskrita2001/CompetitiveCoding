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
        if(!head)
            return NULL;
        if(!head->next)
            return head;
        ListNode *es=NULL,*os=NULL,*ee=NULL,*oe=NULL;
        int i=0;
        for(ListNode *curr=head;curr;curr=curr->next){
            if(i%2==0){
                if(!es){
                    es=curr;
                    ee=es;
                }else{
                    ee->next=curr;
                    ee=ee->next;
                }
            }else{
                if(!os){
                    os=curr;
                    oe=os;
                }else{
                    oe->next=curr;
                    oe=oe->next;
                }
            }
            i++;
        }
        ee->next=os;
        oe->next=NULL;
        return es;
    }
};