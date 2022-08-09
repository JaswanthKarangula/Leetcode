class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        // 15 3 5 
        
        map<int,int> dp;
        
        int mod = 1e9+7;
        sort(arr.begin(),arr.end());
        int res=0;
        int n= arr.size();
        for(int i=0;i<n;++i){
            dp[arr[i]]=1;
            for(int j=0;j<i;++j){
                if(arr[i]%arr[j]==0)
                dp[arr[i]] = (dp[arr[i]]+ (1ll*dp[arr[j]]*dp[arr[i]/arr[j]])%mod)%mod;
            }
            
            res=(res+dp[arr[i]])%mod;
            
        }
        
        return res;
        
    }
};