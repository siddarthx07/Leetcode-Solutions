class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = haystack.find(needle);
        
        cout<<std::string::npos;

        if (found != std::string::npos)
        {
            return found;
        }
        else
        {
            return -1;
        }
    }
};