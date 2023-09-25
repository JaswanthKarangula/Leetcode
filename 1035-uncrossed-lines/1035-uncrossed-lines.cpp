class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(nums1[i]==nums2[j]){
                    if(i!=0 && j!=0 )dp[i][j] = 1+ dp[i-1][j-1];
                    else dp[i][j] =1;
                        
                }
                else{
                    if(i)dp[i][j] = max(dp[i][j],dp[i-1][j]);
                     if(j)dp[i][j] = max(dp[i][j],dp[i][j-1]);
                }
            }
        }
        return dp[n-1][m-1];
    }
};