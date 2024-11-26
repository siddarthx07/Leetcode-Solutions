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
    int pairSum(ListNode* head) 
    {   
        ListNode* temp=head;
        int c=0;
        vector<int>v;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        temp=head;

        int m=c/2;
        for(int i=0;i<c;i++)
        {
            
            if(i>=m)
            {
                v.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        int ans=0;
        int sum;
        for(int i=0; i<m;i++)
        {
            sum=temp->val + v.back();
            v.pop_back();
            ans=max(ans,sum);
            temp=temp->next;
        }


        return ans ;
    }
};