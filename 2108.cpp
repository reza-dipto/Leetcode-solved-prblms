class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            int flag=0;
            int ses=words[i].size();
            for(int j=0;j<ses/2;j++){
                if(words[i][j]!=words[i][ses-j-1]){
                    flag=1;
                    break;
                }
            }
            if(!flag)return words[i];
        }
        return "";
    }
};
