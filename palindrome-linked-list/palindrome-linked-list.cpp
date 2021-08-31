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
    ListNode *rev(ListNode *curr,ListNode *prev){
        if(curr==NULL)
            return prev;
        ListNode *next=curr->next;
        curr->next=prev;
        return rev(next,curr);
    } 
    bool isPalindrome(ListNode* head) {
        ListNode *fast=head,*slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=rev(slow,NULL);
        fast=head;
        while(slow){
            if(fast->val!=slow->val)
                return false;
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
};