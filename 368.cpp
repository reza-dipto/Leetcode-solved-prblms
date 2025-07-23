class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return {};
        sort(nums.begin(),nums.end());
        vector<int>v(n,1);
        vector<int>v1(n,-1);
        vector<int>v2;
        int ses=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && v[i]<v[j]+1){
                    v[i]=v[j]+1;
                    v1[i]=j;
                    if(v[i]>v[ses]){
                        ses=i;
                    }
                }
            }
        }

        while(ses>=0){
            v2.push_back(nums[ses]);
            ses=v1[ses];
        }
        sort(v2.rbegin(),v2.rend());

        return v2;


        
    }
};
