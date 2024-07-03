class Solution {
public:
    bool isPalindrome(int x) 
    {
        long long rev=0;
        int k=x;
        while(k!=0)
        {
            rev=rev*10 + k%10;
            k/=10;
        }

        if(rev==x && x>=0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};