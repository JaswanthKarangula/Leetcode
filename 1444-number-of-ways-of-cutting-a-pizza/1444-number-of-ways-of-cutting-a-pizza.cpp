class Solution {
public:
    int ways(vector<string>& a, int k) {
        int n = a.size();
        int m = a[0].size();
        vector<vector<int>> count(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;--i){
            int suff =0;
            for(int j=m-1;j>=0;--j){
                suff+=a[i][j]=='A';
                count[i][j]=count[i+1][j]+suff;
            }
        }
        int Mod =1e9+7;
        vector<vector<vector<long>>> dp(n + 1, vector<vector<long>>(m + 1, vector<long>(k + 1)));
        for(int i=n-1;i>=0;--i){
            for(int j= m-1;j>=0;--j){
                dp[i][j][1] = count[i][j] > 0;
                for(int kk = 2;kk<=k;++kk){
                   // dp[i][j][kk] =
                    for(int t =i+1;t<n;++t){
                        if(count[i][j]==count[t][j])continue;
                        if(count[t][j]==0)break;
                        dp[i][j][kk] = (dp[i][j][kk] + dp[t][j][kk-1])%Mod;
                    }
                    
                    for(int t =j+1;t<m;++t){
                        if(count[i][j]==count[i][t])continue;
                        if(count[i][t]==0)break;
                        dp[i][j][kk] = (dp[i][j][kk] + dp[i][t][kk-1])%Mod;
                    }
                }
            }
        }
        return dp[0][0][k];
    }
};