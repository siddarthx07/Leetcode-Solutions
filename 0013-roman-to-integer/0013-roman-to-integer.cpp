class Solution {
public:
    int romanToInt(string s) 
    {   
        int a=0;
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        for (int i=0;i<s.size()-1;i++)
        {
            if(mp[s[i]]<mp[s[i+1]])
            {
                a=a-mp[s[i]];
            }
            else
            {
                a=a+mp[s[i]];
            }

        }

        a=a+mp[s[s.size()-1]];
        return a;

    }
};