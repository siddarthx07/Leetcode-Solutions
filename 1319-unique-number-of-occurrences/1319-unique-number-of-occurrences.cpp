class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for (int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        unordered_map<int,int>mp2;
        for(auto x: mp)
        {
            mp2[x.second]++;
        }
        for(auto y: mp2)
        {
            if(y.second>1)
            {
                return false;
            }
        }
        return true;

    }
};