class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int>mp;
        vector<vector<string>>v;
        for(int i=0;i<strs.size();i++){
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            if(mp.find(s1)!=mp.end()){
                v[mp[s1]].push_back(strs[i]);
            }
            else{
                mp[s1]=v.size();
                v.push_back({strs[i]});
            }
        }
        return v;
    }
};
