class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        
        for(int j=0;j<=n;j++)
        {   
            int c=0;
            int i=j;

            while(i>0)
            {
                if(i%2==1)
                {
                    c++;
                }
                i=i/2;
            }

            ans.push_back(c);

            
        }
        return ans;
    }
};