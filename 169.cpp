class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),m=n/2,l=0;
        unordered_map<int,int>v(n);
        for(int i=0;i<n;i++){
            v[nums[i]]++;
        }
        for(auto x:v){
            if(x.second>m){
                l=x.first;
            }
        }
        return l;
    }
};
