class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0; i<flowerbed.size();i++)
        {   
            int left;
            if(i==0)
            {
                left=0; 
            }
            else{
                left=flowerbed[i-1];
            }

            int right;
            if(i==flowerbed.size()-1)
            {
                right=0;
            }
            else
            {
                right=flowerbed[i+1];
            }
            if((left + flowerbed[i] + right)==0)
            {
                flowerbed[i] = 1;
                n--;
            }
        }
        if(n<=0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};