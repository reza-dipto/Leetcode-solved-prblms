class Solution {
public:
    int maxScore(vector<int>& nums) {
        int n=nums.size();
        int ses=0;
        long sess=0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=0;i--){
            sess+=nums[i];
            if(sess>0){
                ses++;
            }
        }
        return ses;
        
    }
};
