class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({nums2[i],nums1[i]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        priority_queue<int>pq;
        long ses=0,sess=0;
        for(int i=0;i<k-1;i++){
            sess+=v[i].second;
            pq.push(-v[i].second);
        }
        for(int i=k-1;i<n;i++){
            sess+=v[i].second;
            pq.push(-v[i].second);
            ses=max(ses,sess*v[i].first);
            sess+=pq.top();
            pq.pop();
        }
         return ses;       
    }
   
};
