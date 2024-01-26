//bottom-up dp took help from gfg

class Solution {
 public:
  int minCost(int n, vector<int>& cuts) {
    cuts.push_back(0);
    cuts.push_back(n);
    int sz=cuts.size();
    sort(begin(cuts), end(cuts));
    vector<vector<int>> dp(sz, vector<int>(sz));
    for (int i=2;i<sz;i++)
      for (int j=0;i+j<sz;j++) {
        int k= i+j;
        dp[j][k] = INT_MAX;
        for (int z=j+1;z<k;z++)
          dp[j][k] = min(dp[j][k], cuts[k] - cuts[j] + dp[j][z] + dp[z][k]);
      }

    return dp[0][sz- 1];
  }
};
