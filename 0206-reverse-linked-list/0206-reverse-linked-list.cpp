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
    ListNode* reverseList(ListNode* head) 
    {   
        ListNode* temp=head;
        stack<int>s;
        while(temp)
        {
            s.push(temp->val);
            //cout<<temp->val;
            temp=temp->next;   
        }
        
        ListNode* rev=NULL;
        ListNode* temp2=rev;

        while(s.empty()!=1)
        {   
            //cout<<"hi"<<endl;
            ListNode* newnode= new ListNode(s.top());
            s.pop();
            if(rev==NULL)
            {
                rev=newnode;
            }
            else
            {
                temp2->next=newnode;
            }
            temp2=newnode;
        }
        return rev;
    }
};