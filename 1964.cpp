//binary search approach + basics of longest increasing subsequence
class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles){
        int n=obstacles.size();
        vector<int>v(n,1),lis;
        for(int i=0;i<n;i++){
            int indx=upper_bound(lis.begin(),lis.end(),obstacles[i])-lis.begin();
            if(indx==lis.size()){
                lis.push_back(obstacles[i]);
            }
            else{
                lis[indx]=obstacles[i];
            }
            v[i]=indx+1; 
        }
        return v;
    }
};
