class Solution {
public:
    string reverseVowels(string s) {
        string s1;
        for (int i=0; i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                s1.push_back(s[i]);
            }
        }
        
        int n=s1.size();
        string sRev=s1;
        for (int i = 0; i < n; i++) {
            sRev[i] = s1[n - i - 1];
        }
        int i=0;
        int j=0;
        while(i<s.size() || j<sRev.size())
        {
            if(isVowel(s[i]))
            {
                s[i]=sRev[j];
                j++;
            }
            i++;
        }
        return s;
    }

    bool isVowel(char v)
    {
        if(v=='a' || v=='e' || v=='i' || v=='o' 
        || v=='u' || v=='A' || v=='E' || v=='I' || v=='O' || v=='U')
        {
            return true;
        }

        else
        {
            return false;
        }
         

    }
};