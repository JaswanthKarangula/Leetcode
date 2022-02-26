class Solution {
public:
    
    
    int shortestPathLength(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> dist(n,vector<int>(n,17));
        for(int i=0;i<n;++i){
            for(auto v:graph[i]){
                dist[i][v]=1;
            }
        }
        for(int k=0;k<n;++k)
            for(int i=0;i<n;++i)
                for(int j=0;j<n;++j)
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
        
        vector<vector<int>> dp((1<<n),vector<int>(n,17));
        for(int i=0;i<n;++i){
            dp[(1<<i)][i]=0;
        }
        
        for(int mask=1;mask<(1<<n);++mask){
            for(int u=0;u<n;++u){
                for(int v=0;v<n;++v){
                    int source=1<<u;
                    int destination=1<<v;
                    if((source&mask) && !(destination&mask)){
                        dp[mask|destination][v]=min(dp[mask|destination][v],dp[mask][u]+dist[u][v]);
                    }
                }
            }
        }
        int mi=INT_MAX;
        for(int i=0;i<n;++i){
            mi=min(mi,dp[((1<<n)-1)][i]);
        }
        return mi;
    }
};