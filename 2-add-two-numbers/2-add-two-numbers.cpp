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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        int carry = 0;
        int sum = 0;
        while(l1 || l2 || carry){
            sum=((l1)?l1->val:0)+((l2)?l2->val:0)+carry;
            carry=sum/10;
            temp->next = new ListNode(sum%10);
            temp=temp->next;
            if(l1)
            l1=l1->next;
            if(l2)
            l2=l2->next;
        }
        if(carry)
            temp->next = new ListNode(carry);
        return res->next;
    }
};