class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {   
        if(arr.size()<3)
        {
            return false;
        }
        
        for (int i=0; i<arr.size()-2;i++)
        {   
            //cout<<'hii';
            if(checkodd(arr[i]) && checkodd(arr[i+1]) && checkodd(arr[i+2]))
            {
                return true;
            }
            else
            {
                continue;
            }
        }
        return false;
    }
private:
    bool checkodd(int x)
    {
        if(x%2==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

};

