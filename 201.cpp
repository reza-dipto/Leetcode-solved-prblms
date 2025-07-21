class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ses=0;
        while(left<right){
            left>>=1;
            right>>=1;
            ses++;
        }
        return right<<ses;
        
    }
};
