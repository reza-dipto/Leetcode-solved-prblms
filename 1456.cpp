class Solution {
public:
    bool check (char c){
        return (c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u');
    }
    int maxVowels(string s, int k) {
        int mx=0;
        int ses=0;
        int n=s.size();
        int left=0;
        while(left<k){
            if(check(s[left]))ses++;
            left++;
        }
        for(int i=left;i<n;i++){
            mx=max(ses,mx);
            if(check(s[i]))ses++;
            if(check(s[i-k]))ses--;
        }
        return max(mx,ses);
        
    }
};
