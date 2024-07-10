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
    bool isPalindrome(ListNode* head) 
    {
        ListNode* temp=head;
        ListNode* temp2=head;
        stack<int>s;
        while(temp)
        {
            s.push(temp->val);
            //cout<<temp->val;
            temp=temp->next;   
        }
        
        while(s.empty()!=1)
        {   
            //cout<<"hi"<<endl;
            if(temp2->val!=s.top())
            {
                return false;
            }
            s.pop();
            temp2=temp2->next;
        }

        return true;
           
    }
};