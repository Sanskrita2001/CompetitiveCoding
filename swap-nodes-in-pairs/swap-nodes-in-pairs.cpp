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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode *curr=head,*prev=NULL,*next;
        int i=0;
        while(curr && i<2){
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            i++;
        }
        if(next)
        head->next=swapPairs(next);
        return prev;
    }
};