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
    int getDecimalValue(ListNode* head) {
        if(head->next==NULL)
            return head->val;
        int x=0;
        ListNode* curr=head;
        while(curr!=NULL){
            x=x*2+(curr->val);
            cout<<x<<" ";
            curr=curr->next;
        }
        return x;
    }
};