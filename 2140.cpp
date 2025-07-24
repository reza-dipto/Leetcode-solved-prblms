class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long>dp(200001,0);
        for(int i=n-1;i>=0;i--){
            dp[i]=max(dp[i+1],questions[i][0]+dp[i+1+questions[i][1]]);
        }
        return dp[0];
    }
};
