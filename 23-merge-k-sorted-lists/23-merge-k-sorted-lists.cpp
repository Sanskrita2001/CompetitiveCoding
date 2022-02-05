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
    ListNode *merge(ListNode *l1,ListNode *l2)
    {
        ListNode *temp=new ListNode(4);
        ListNode *ans=temp;
        while(l1!=NULL and l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                temp->next=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        while(l1!=NULL)
        {
            temp->next=l1;
            l1=l1->next;
            temp=temp->next;
        }
        while(l2!=NULL)
        {
            temp->next=l2;
            l2=l2->next;
            temp=temp->next;
        }
        return ans->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *ans=NULL;
        for(int i=0;i<lists.size();i++)
        {
            if(ans==NULL)
                ans=lists[i];
            else
            {
                auto l1=lists[i];
                ans=merge(ans,l1);
            }
        }
        return ans;
    }
};