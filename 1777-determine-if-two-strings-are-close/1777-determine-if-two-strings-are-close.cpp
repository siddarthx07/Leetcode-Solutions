class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
        {
            return false;
        }


        set<char>set1(word1.begin(),word1.end());
        set<char>set2(word2.begin(),word2.end());


        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<word1.size();i++)
        {
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        vector<int>v1,v2,v3,v4;
        for(auto x:mp1)
        {
            v1.push_back(x.second);
            v1.push_back(x.first);
        }
        for(auto x:mp2)
        {
            v2.push_back(x.second);
            v2.push_back(x.first);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
    }
};