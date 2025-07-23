class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int>v;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                int num= stoi(s.substr(i,j-i+1));
                if(num>high)break;
                if(low<=num)v.push_back(num);
            }
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};
