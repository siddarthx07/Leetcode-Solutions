class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=nums.size()/2;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for(auto m:mp)
        {
            if(m.second>x)
            {
                return m.first;
            }
        }
        return 0;
    }
};