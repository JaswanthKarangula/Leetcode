class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<vector<int>> events;
        for(auto interval : intervals){
            events.push_back({interval[0],1});
            events.push_back({interval[1],2});
        }
        sort(events.begin(),events.end());
        int maxCount =0;
        int count =0;
        for(int i=0;i<events.size();++i){
            
           // cout<<events[i][0]<<" ";
            if(events[i][1]==1){
                count++;
            }
            else{
                count--;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};