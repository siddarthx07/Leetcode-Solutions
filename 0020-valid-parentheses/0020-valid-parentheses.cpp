class Solution {
public:
    bool isValid(string s) 
    {
        map<char,int>mp;
        stack<char>st;
        mp['(']=1;
        mp[')']=2;
        mp['{']=3;
        mp['}']=4;
        mp['[']=5;
        mp[']']=6;



        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1 || mp[s[i]]==3 || mp[s[i]]==5)
            {
                st.push(s[i]);
                cout<<"odd"<<endl;
            }

            else
            {   
                cout<<"hi"<<endl;
                if(st.size()!=0 && mp[s[i]]-mp[st.top()]==1 ) 
                {
                    st.pop();  
                    cout<<"even"<<endl;              
                }
                else{
                    return false;
                }

            }
        }
    
        if(st.size()!=0)
        {
            return false;
        }
        else
        {
            return true;
        }


    }
};