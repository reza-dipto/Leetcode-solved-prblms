class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
        int l2=nums2.size();
        vector<int>v1,v2;
        map<int,int>mp;
        for(int i=0;i<l1;i++){
            mp[nums1[i]]=1;
        }
        for(int i=0;i<l2;i++){
            if(mp[nums2[i]]==1){
                mp[nums2[i]]=3;
            }
            else{
                if(mp[nums2[i]]!=3){
                    if(mp[nums2[i]]!=2){
                        v2.push_back(nums2[i]);
                        mp[nums2[i]]=2;
                    }
                }
            }
        }
        for(int i=0;i<l1;i++){
            if(mp[nums1[i]]==1){
                v1.push_back(nums1[i]);
                mp[nums1[i]]=4;
            }
        }
        return {v1,v2};
       
    }
};
