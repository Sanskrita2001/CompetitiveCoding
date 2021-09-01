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
    ListNode* reverseK(ListNode* head, int k,int count){
        if(head == NULL)
            return NULL;
        if(count<k)
            return head;
        ListNode *curr=head, *prev = NULL, *next;
        int cnt=0;
        while(curr && cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        if(next){
            ListNode *rest_head=reverseK(next,k,count-k);
            head->next=rest_head;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL)
            return NULL;
        int count=0;
        ListNode *curr=head;
        while(curr){
            curr=curr->next;
            count++;
        }
        if(count<k)
            return head;
        
        return reverseK(head,k,count);
    }
};