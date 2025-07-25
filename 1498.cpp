//sliding window approach
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        int mod=1e9+7;
        vector<int>pre(n);
        pre[0]=1;
        for(int i=1;i<n;i++){
            pre[i]=(pre[i-1]*2)%mod;
        }
        int ses=0;
        while(i<=j){
            if(nums[i]+nums[j]<=target){
                ses=(ses+pre[j-i])%mod;
                i++;
            }
            else{
                j--;
            }
        }
        return ses;
    }
};
