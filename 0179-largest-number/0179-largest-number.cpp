class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> numsString;
        for(auto x:nums)
        {
            numsString.push_back(to_string(x));
        }

        sort(numsString.begin(),numsString.end(),[](const string& a, const string& b)
        {
            return a+b > b+a;
        });

        if(numsString[0]=="0")
        {
            return "0";
        }
        string ans;
        for(auto x:numsString)
        {
            ans+=x;
        }
        return ans;


    }
};