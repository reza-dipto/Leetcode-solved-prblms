class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int ses=1;
        int rs=0,re=n-1;
        int cols=0,cole=n-1;
        vector<vector<int>>v(n,vector<int>(n,1));
        while(rs<=re && cols<=cole){
           for(int i=cols;i<=cole;i++){
                v[rs][i]=ses++;
            }
            rs++;
            for(int i=rs;i<=re;i++){
                v[i][cole]=ses++;
            }
             cole--;
            for(int i=cole;i>=cols;i--){
                v[re][i]=ses++;
            }
            re--;
            for(int i=re;i>=rs;i--){
                v[i][cols]=ses++;
            }
            cols++;

        }
        return v;
        
        
    }
};
