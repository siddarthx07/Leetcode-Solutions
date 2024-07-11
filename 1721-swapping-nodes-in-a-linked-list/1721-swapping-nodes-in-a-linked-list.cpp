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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode* temp1=head;
        ListNode* temp2=head;
        ListNode* temp3=head;
        int c=0;
        while(temp1)
        {   
            c++;
            temp1=temp1->next;
        }

        int m=c-k+1;

        while(--k)
        {   
            temp2=temp2->next;
        }
        temp1=head;
        while(--m)
        {
            temp1=temp1->next;
        }
        int a=temp1->val;
        int b=temp2->val;
        while(temp3)
        {   
            
            if(temp3==temp2)
            {
                temp3->val=a;
            }

            if(temp3==temp1)
            {
                temp3->val=b;
            }
            temp3=temp3->next;
        }

        return head;

    }
};