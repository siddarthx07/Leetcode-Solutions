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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode* temp=head;
        ListNode* temp2=head;
        ListNode* dummy=new ListNode(0,head);
        ListNode* prev=dummy;
        int c=0;

        while(temp)
        {
            temp=temp->next;
            c++;
        }

        int m=c/2;
        cout<<m;

        while(m>0)
        {
            prev=prev->next;
            m--;

        }



        prev->next=prev->next->next;



        return dummy->next;


    }
};