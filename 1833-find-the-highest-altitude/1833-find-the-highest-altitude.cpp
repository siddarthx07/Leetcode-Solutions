class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxAlt=0;
        for(int i=0;i<gain.size();i++)
        {

            
            sum+=gain[i];
            cout<<sum<<endl;

            

            maxAlt=max(sum,maxAlt);
        }
        return maxAlt;
    }
};