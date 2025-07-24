class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     //if(k==1)return 1;
     map<int,int>mp;
     vector<int>ans;
     for(auto x:nums){
         mp[x]++;
     }
     priority_queue<pair<int,int>>q;
     for(auto [a,b]:mp){
         q.push({b,a});
     }
     while(k){
         ans.push_back(q.top().second);
         q.pop();
         k--;
     }
     return ans;
    }
};
