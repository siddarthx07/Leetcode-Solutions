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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {

        ListNode* temp1=headA;
        ListNode* temp2=headB;
        ListNode* temp3=headA;
        ListNode* temp4=headB;
        int a=0;
        int b=0;
        while(temp1)
        {   
            a++;
            temp1=temp1->next;
        }

         while(temp2)
        {   
            b++;
            temp2=temp2->next;
        }

        int x=abs(a-b);
        cout<<x;
        //cout<<max(a,b)<<" "<< abs(a-b);

        if (max(a,b)==a)
        {   

            while(x--)
            {
                temp3=temp3->next;
                cout<<"hi";
            }

            while(temp3)
            {
                if(temp3==temp4)
                {
                    return temp3;
                }

                temp3=temp3->next;
                temp4=temp4->next;
            }

            return NULL;

        }

        else
        {
            while(x--)
            {
                cout<<"bye";
                temp4=temp4->next;
                
            }   
            while(temp4)
            {
                if(temp4==temp3)
                {
                    return temp4;
                }

                temp4=temp4->next;
                temp3=temp3->next;
            }
            return NULL;         
        }

    }
};