class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        string s1;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto x:mp){
            v.push_back({x.second,x.first});
        }
        sort(v.rbegin(),v.rend());
        for(auto x:v){
            for(int i=0;i<x.first;i++){
                s1+=x.second;
            }
        }
        return s1;
        
    }
};
