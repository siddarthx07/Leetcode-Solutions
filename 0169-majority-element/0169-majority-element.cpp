class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=nums.size()/2;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>x)
            {
                return nums[i];
            }
        }

 
        return 0;
    }
};