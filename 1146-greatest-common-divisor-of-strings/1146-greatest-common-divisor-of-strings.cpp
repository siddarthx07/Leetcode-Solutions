class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans;
        if((str1 + str2) != (str2 + str1))
        {
            return "";
        }
        int k=gcd(str1.length(),str2.length());
        for (int i=0; i<k;i++)
        {
            ans.push_back(str1[i]);
        }
        return ans;
    }
    int gcd(int a,int b)
    {   
        while(b)
        {   
            int t=b;
            b=a%b;
            a=t;
        }
        return a;
    }
};