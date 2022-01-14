class Solution {
public:
    int earliestFullBloom(vector<int>& p, vector<int>& g) {
        int time=0;
        int n=g.size();
        vector<vector<int>> a;
        for(int i=0;i<n;++i){
            a.push_back({g[i],p[i]});
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int end_time=0;
        for(int i=0;i<n;++i){
            time+=a[i][1];
            end_time=max(end_time,time+a[i][0]);
            
        }
        return end_time;
        
    }
};