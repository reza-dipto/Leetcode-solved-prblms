class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(high+1);
        dp[0]=1;
        int ses=0;
        int mod=1e9+7;
        for(int i=min(zero,one);i<=high;i++){
            if(i>=zero){
                dp[i]=(dp[i]+dp[i-zero])%mod;
            }
            if(i>=one){
                dp[i]=(dp[i]+dp[i-one])%mod;
            }
        }
        for(int i=low;i<=high;i++){
            ses=(ses+dp[i])%mod;
        }
        return ses;
    }
};
