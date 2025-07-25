class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        long ses=1;
        for(auto x:nums){
            if(x==0){
                return 0;
            }
           else  if(x<0){
                ses*=-1;
            }
            
            else
            {
                ses*=1;
            }
        }
        if(ses==0)return 0;
        else if(ses>0)return 1;
        else return -1; 
        
    }
};
