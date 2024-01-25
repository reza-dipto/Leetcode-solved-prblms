class Solution {
public:

    bool dfs(vector<vector<int>>& v,vector<int>& vis,int x,int y){

    if(x==y)return true;
    if(vis[x])return false;
    vis[x]=1;

    for(int i=0;i<v[x].size();i++)
    {
        if(dfs(v,vis,v[x][i],y))
            return true;
    }

    return false;

}




    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>v(n);
        vector<int>vis(n,0);
        for(int i=0;i<edges.size();i++)
        {
            v[edges[i][0]].push_back(edges[i][1]);
            v[edges[i][1]].push_back(edges[i][0]);

        }
        return dfs(v,vis,source,destination);

    }
};
