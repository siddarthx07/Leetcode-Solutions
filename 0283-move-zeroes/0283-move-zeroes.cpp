class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                continue;
            }
            else
            {   
                swap(nums[i], nums[nonZero]);
                nonZero++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i];
        }
    }


};