class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int x=nums.size()/3;
        vector<int> ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;

        }

        for(auto m:mp)
        {
            if(m.second>x)
            {
                ans.push_back(m.first);
            }
        }

 
        return ans;
    }
};