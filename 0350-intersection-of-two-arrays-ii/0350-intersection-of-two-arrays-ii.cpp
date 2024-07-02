class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {

    map<int,int> mp;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    if(nums1.size()<nums2.size())
    {
        a=nums1;
        b=nums2;
    }
    else
    {
        a=nums2;
        b=nums1;
    }
   
    for (int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }

    for(int i=0; i<b.size();i++)
    {
        if(mp.count(b[i])==1 && mp[b[i]]!=0)
        {
            mp[b[i]]--;
            c.push_back(b[i]);

        }
    }   
    
    return c;
    }

};