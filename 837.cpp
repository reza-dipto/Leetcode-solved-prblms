class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(k==0 || n>=k+maxPts){
            return 1.0;        
        }
        vector<double>arr(n+1);
        double ses=1.0,ans=0.0;
        arr[0]=1.0;
        for(int i=1;i<n+1;i++){
            arr[i]=ses/maxPts;
            if(i<k){
                ses+=arr[i];
            }
            else{
                ans+=arr[i];
            }
            if(i-maxPts>=0){
                ses-=arr[i-maxPts];
            }
        }
        return ans;
    }
};
