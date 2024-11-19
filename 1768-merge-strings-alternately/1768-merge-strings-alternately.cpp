class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string x=word1;
        string y=word2;
        string z,maxString,minString ;
        int xlen=x.length();
        int ylen=y.length();
        if(xlen>ylen)
        {
            maxString=x;
            minString=y;
        }
        else
        {
            maxString=y;
            minString=x;
        }

        
        for(int i=0;i<maxString.length();i++)
        {   cout<<i;
            if(i>(minString.length()-1))
            {   
                cout<<"hi";
                z.push_back(maxString[i]);
                continue;
                
            }
            
            
            z.push_back(x[i]);
            
            z.push_back(y[i]);
            
        }
        return z;
    }
};