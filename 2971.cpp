class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        long long ses=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            ses+=nums[i];
        }
        int x=n;
        for(int i=n-1;i>1;i--){
            if(ses<=2*nums[i]){
                ses-=nums[i];
                x--;
            }
        }
        
        if(x>2)return ses;
        else return -1;
    }
};
