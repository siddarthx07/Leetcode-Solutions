class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m=matrix.size();
        int n=matrix[0].size();

        int l=0;
        int r=m*n-1;
        int i,j,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            int i=mid/n;
            int j=mid%n;
            if(target==matrix[i][j])
            {
                return true;
            }

            else if(target>matrix[i][j])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }

        }
        return false;
    }
};