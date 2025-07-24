class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //coil er pech er moto traverse korte hobe
        int ses=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int total=m*n;
        int rs=0,re=m-1;
        int cols=0,cole=n-1;
        vector<int>v;
        while(ses<total){
            // 1 2 3 4
            for(int i=cols;i<=cole && ses<total;i++){
                v.push_back(matrix[rs][i]);
                ses++;
            }
            rs++;
            // 8 12
            for(int i=rs;i<=re && ses<total;i++){
                v.push_back(matrix[i][cole]);
                ses++;
            }
            // 11 10 9
            cole--;
            for(int i=cole;i>=cols && ses<total;i--){
                v.push_back(matrix[re][i]);
                ses++;
            }
            re--;
            // 5 6 7
            for(int i=re;i>=rs && ses<total;i--){
                v.push_back(matrix[i][cols]);
                ses++;
            }
            cols++;

        }
        return v;
        
    }
};
