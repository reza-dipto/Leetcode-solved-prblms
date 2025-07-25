class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int ses=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    ses+=mat[i][j];
                }
                else if(i+j==n-1){
                    ses+=mat[i][j];
                }
            }
        }
        return ses;
    }
};
