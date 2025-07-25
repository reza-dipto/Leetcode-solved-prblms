 // 2 5 1 2 5
// 10 5 2 1 5 2 longest common subsequnce
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int dp[max(n+1,m+1)][max(n+1,m+1)];
        for(int i=0;i<=max(n,m);i++){
            dp[0][i]=0;
            dp[i][0]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(nums1[i-1]==nums2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }     
            }
        }
        return dp[n][m];

    }
};
