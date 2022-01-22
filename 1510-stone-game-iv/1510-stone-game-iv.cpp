class Solution {
public:
    bool winnerSquareGame(int n) {
        // dp[i] can he win if there are n stones;
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;++i){
            for(int j=1;j*j<=i;j++){
                dp[i]=dp[i] | !dp[i-(j*j)];
            }
            cout<<dp[i]<<endl;
        }
        return dp[n];
    }
};