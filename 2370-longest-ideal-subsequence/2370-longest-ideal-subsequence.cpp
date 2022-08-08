class Solution {
public:
    int longestIdealString(string s, int k) {
        int n=s.size();
        vector<int> idx(26+1,-1);
        vector<int> dp(n,1);
        
        idx[s[0]-'a']=0;
        int res=1;
        for(int i=1;i<n;++i){
            for(int j=0;j<=k;++j){
                int nextChar1 = abs(j + (s[i]-'a'));
                int nextChar2 = (s[i]-'a')-j;
                if(nextChar1<26 && nextChar1>=0 && idx[nextChar1]!=-1)
                dp[i] = max(dp[i], dp[idx[nextChar1]]+1);
                if(nextChar2<26 && nextChar2>=0 && idx[nextChar2]!=-1)
                dp[i]= max(dp[i],dp[idx[nextChar2]]+1);
                
            }
            res=max(res,dp[i]);
            idx[s[i]-'a']=i;
        }
        
        return res;
    }
};