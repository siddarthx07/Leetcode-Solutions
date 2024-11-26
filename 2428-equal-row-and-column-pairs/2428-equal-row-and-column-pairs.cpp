class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
       map<vector<int>, int> rowFreq;
        int count = 0;
        
        for (const auto& row : grid) 
        {
            rowFreq[row]++;
        }
        
        for (int col = 0; col < grid[0].size(); col++) 
        {
            vector<int> column;
            for (int row = 0; row < grid.size(); row++) 
            {
                column.push_back(grid[row][col]);
            }
            
            count += rowFreq[column];
        }
        
        return count;
    }
    
};