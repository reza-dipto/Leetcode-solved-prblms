class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int>p;
        int n=heights.size();
        int ses=0;
        int i;
        for(i=0;i<n-1;i++){
           
            ses=heights[i+1]-heights[i];
            if(ses<=0){
                continue;
            }
            bricks-=ses;
            p.push(ses);

            if(bricks<0){
                bricks+=p.top();
                p.pop();
                ladders--;
            }

            if(ladders<0)break;

        
        }
        return i;
        
    }
};
