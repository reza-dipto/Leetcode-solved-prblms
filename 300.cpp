class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] && v[j]+1>v[i]){
                    v[i]=v[j]+1;
                }
            }
        }
        int mx=*max_element(v.begin(),v.end());
        return mx;
        
    }
};
