class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumL=0;
        vector<int> leftsum;
        leftsum.push_back(0);
        for (int i=0;i<nums.size()-1;i++)
        {
            sumL+=nums[i];
            cout<<sumL<<endl;
            leftsum.push_back(sumL);
            
        }

        int sumR=0;
        vector<int> rightsum;
        rightsum.push_back(0);
        int n=nums.size();
        for (int i=n-1;i>0;i--)
        {   
            
            sumR+=nums[i];
            cout<<sumR<<endl;
            rightsum.push_back(sumR);
        }
        int i=0;
        while(i<leftsum.size())
        {   
            if(leftsum[i]==rightsum[n-i-1])
            {
                return i;
            }
            i++;
        }
        return -1;
        
    }
};