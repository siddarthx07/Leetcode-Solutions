class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        for(int i=0;i<candies.size();i++)
        {
            int a=candies[i]+extraCandies;
            int maxNum=*max_element(candies.begin(), candies.end());
            if(a>=maxNum)
            {
                ans.push_back(true);
            }
            else
                ans.push_back(false);
        }
        return ans;
    }
};