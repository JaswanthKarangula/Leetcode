class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        priority_queue<int,vector<int>, greater<int>> pq;
        int n = heights.size();
        for(int i=0;i<n-1;++i){
            if(i+1<n && heights[i]<heights[i+1]){
                
                pq.push(heights[i+1]-heights[i]);
                if(pq.size()>ladders){
                    auto t= pq.top();
                    pq.pop();
                    bricks-=t;
                    
                }
            }
            if(bricks<0)return i;
        }
        
        return n-1;
    }
};