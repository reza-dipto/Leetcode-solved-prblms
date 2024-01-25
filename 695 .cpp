class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int mx=0;
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int ses=1;
                if(grid[i][j]==1)
                {
                    dfs(grid,i,j,ses);
                    mx=max(mx,ses);
                    
                }
                   // mx=max(mx,ses);
            }
        }
        return mx;
        
    }

    int dfs(vector<vector<int>>& grid,int i,int j,int& cnt)
    {
        if(i<0|| j<0||i>=grid.size()|| j>=grid[0].size())return 0;
        
    
        if(grid[i][j]==0)return 0;

        grid[i][j]=0;

        if(dfs(grid,i+1,j,cnt))cnt++;
        if(dfs(grid,i-1,j,cnt))cnt++;
        if(dfs(grid,i,j+1,cnt))cnt++;
        if(dfs(grid,i,j-1,cnt))cnt++;

        return 1;
    }
};
