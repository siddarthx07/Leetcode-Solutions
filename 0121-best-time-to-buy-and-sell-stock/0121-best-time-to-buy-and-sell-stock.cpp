class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi;
        int ma;
        int flag=0;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {   
            if(i==0)
            {
                mi=prices[0];
                flag=1;
            }
            else if(prices[i]<mi)
            {
                mi=prices[i];
                flag=1;
            }

            if(flag==1)
            {
                for(int j=i+1;j<prices.size() && prices[j]>prices[i];j++)
                {
                    profit=max(profit,prices[j]-prices[i]);
                }
            }
        }
        return profit;
    }
};