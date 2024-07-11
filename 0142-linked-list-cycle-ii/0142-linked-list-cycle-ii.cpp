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
    ListNode *detectCycle(ListNode* head) 
    {
        map<ListNode*, bool> m1;
        ListNode* temp=head;
        while(m1[temp]==false && temp)
        {
            m1[temp]=true;
            temp=temp->next;
        }
        return temp;       
    }
};