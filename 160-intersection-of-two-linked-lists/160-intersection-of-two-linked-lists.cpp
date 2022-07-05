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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         
        ListNode *curr2 = headB;
        while(curr2){
            ListNode *curr1 = headA;
            while(curr1){
                if(curr1!=curr2)
                    curr1=curr1->next;
                else
                    return curr1;
            }
            curr2=curr2->next;
        }
        return NULL;
    }
};