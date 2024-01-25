class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        unordered_map<int,int>v1;
        for(int i=0;i<n;i++){
            v1[nums[i]]++;
        }
        for(auto x:v1){
            if(x.second>n/3){
                v.push_back(x.first);
            }
        }
        return v;
    }
};
