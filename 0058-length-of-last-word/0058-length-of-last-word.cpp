class Solution {
public:
    int lengthOfLastWord(string s) 
    {   
        string s1="";
        int n=s.size();
        for (int i =(n-1);i>=0;i--)
        {
            if(s1.size()==0 && s[i]==' ')
            {
                continue;
            }
            
            else if(s[i]!=' ')
            {
                s1.push_back(s[i]);
            }

            else
            {
                break;
            }
        }  

        cout<<s1<<endl;
        return s1.size();
    }
};