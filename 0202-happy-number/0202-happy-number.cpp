class Solution {
public:
    bool isHappy(int n) 
    {
        int slow,fast;
        slow=digitsqrsum(n);
        fast=digitsqrsum(slow);
        while(slow!=fast)
        {
            slow=digitsqrsum(slow);
            fast=digitsqrsum(digitsqrsum(fast));
        }

            if(slow==1)
            {
                return true;
            }
            else
            {
                return false;
            }



    }

    private:
        int digitsqrsum(int x)
        {   
            int sum=0;
            while(x!=0)
            {
                sum+=pow(x%10,2);
                x/=10;
            }
            return sum;
        }


};