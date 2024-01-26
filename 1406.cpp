// bottom up dp diye korsi took a bit help from GFG

class Solution {
 public:
  string stoneGameIII(vector<int>& stoneValue) {
    int n = stoneValue.size();
    vector<int> dp(n + 1, INT_MIN / 2);
    dp.back()=0;
    for (int i=n-1;i>=0;i--) {
      int sum=0;
      for (int j=i;j<i+3 && j<n;j++) {
        sum+=stoneValue[j];
        dp[i]=max(dp[i],sum-dp[j+1]);
      }
    }
    if(dp[0]>0)return "Alice";
    else if(dp[0]<0)return "Bob";
    else return "Tie";
    }
};
