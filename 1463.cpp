class Solution {
public:
    int dy[3] = {0,-1,1};
    int grid[71][71][71];

    int dfs(vector<vector<int>>& grid2, int i, int c1, int c2, int m, int n){

        if(i==m)return 0;
        if(c1<0 || c2<0 || c1>=n || c2>=n) return INT_MIN;
        if(grid[i][c1][c2] != -1) return grid[i][c1][c2];

        int ans = 0;

        for(int k =0;k<3;k++){
            for(int r = 0;r<3;r++){
                ans = max(ans, dfs(grid2, i+1, c1 + dy[k], c2 + dy[r] , m, n));
            }
        }

        ans += (c1==c2) ? grid2[i][c1] : grid2[i][c1] + grid2[i][c2];
        return grid[i][c1][c2] = ans;

    }
    int cherryPickup(vector<vector<int>>& grid2) {
        int m = grid2.size(); 
        if(!m)return 0;
        int n  = grid2[0].size(); 
        memset(grid,-1,sizeof grid);
        return dfs(grid2,0,0,n-1,m,n);

    }
};




