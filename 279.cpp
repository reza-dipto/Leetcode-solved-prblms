// here ,recursive method gives RTE;
// memoization (top down dp - 0(n*sqrt(n)) & 0(n))
// can also be solved using tabulation (bottom up dp - 0(n*sqrt(n)), & 0(n)) 
class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        int mini=INT_MAX;
        for(int i=1;i<=n;i++){
          for(int j=1;j*j<=i;j++){
              int x=dp[i-j*j];
              dp[i]=min(dp[i],x+1);
          }
        }
        return dp[n];
    }
};
