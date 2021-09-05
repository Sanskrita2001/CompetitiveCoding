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
        int count1=0,count2=0;
        unordered_set<ListNode *>hs;
        for(ListNode *curr=headA;curr;curr=curr->next)
            hs.insert(curr);
        for(ListNode *curr=headB;curr;curr=curr->next){
            if(hs.find(curr)!=hs.end())
                return curr;
        }
        return NULL;
    }
};