class Solution {
public:
    int isPossible(int prev,int curr ,vector<vector<int>>& g , vector<int>& vis){
        if(vis[curr])return 0;
        if(abs(g[prev][0]-g[curr][0])==2 && abs(g[prev][1]-g[curr][1])==1)return 1;
        if(abs(g[prev][0]-g[curr][0])==1 && abs(g[prev][1]-g[curr][1])==2)return 1;
        return 0;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n==0 || grid[0][0]!=0)return n==0;
        vector<vector<int>> g(n*n);
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                g[grid[i][j]] = {i,j};
            } 
        }
        
        vector<int> vis(n*n,0);
        for(int i=1;i<n*n;++i){
            int prev =i-1;
            int curr =i;
            if(isPossible(prev,curr,g,vis)){
                vis[curr]=1;
                continue;
            }
            return 0;
        }
        return 1;
    }
};