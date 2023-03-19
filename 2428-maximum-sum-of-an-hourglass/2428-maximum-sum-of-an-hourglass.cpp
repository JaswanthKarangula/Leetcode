class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        int res =0 ;
        for(int i=1;i<n-1;++i){
            for(int j=1;j<m-1;++j){
                int sum = g[i-1][j-1]+g[i-1][j]+g[i-1][j+1];
                sum+=g[i][j];
                sum+=g[i+1][j-1]+g[i+1][j]+g[i+1][j+1];
                res = max(res,sum);
            }
        }
        return res;
    }
};