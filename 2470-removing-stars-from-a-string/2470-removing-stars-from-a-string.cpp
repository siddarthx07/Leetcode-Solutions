class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        stack <int> st;
        
        for(auto x: s)
        {   
            if(x!='*')
            {
                st.push(x);
            }
            else if(!st.empty())
            {
                st.pop();
            }

        }
        
        string ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};