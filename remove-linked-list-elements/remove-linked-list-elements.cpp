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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return NULL;
        if(head->val==val && head->next==NULL){
            return NULL;
        }
        ListNode *curr=head;
        while(curr!=NULL and curr->val==val){
            curr=curr->next;
            head=head->next;
        }
        while(curr!=NULL and curr->next!=NULL){
            if(curr->next->val == val){
                curr->next=curr->next->next;
            }
            else
            curr=curr->next;    
        }
        // if(curr->next->val==val)
        //     curr->next=NULL;
        return head;
    }
};