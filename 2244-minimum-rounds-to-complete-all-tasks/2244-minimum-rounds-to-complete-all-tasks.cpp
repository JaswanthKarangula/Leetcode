class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
        if(n<2)return -1;
        vector<int> dp(n+10,-1);
        dp[2]=1;
        dp[3]=1;
        for(int i=4;i<=n;++i){
            int temp=INT_MAX;
            if(dp[i-2]!=-1){
                temp=min(temp,dp[i-2]+1);
            }
            if(dp[i-3]!=-1){
                temp=min(temp,dp[i-3]+1);
            }
            if(temp!=INT_MAX){
                dp[i]=temp;
            }
        }
       // cout<<"OK"<<endl;
        map<int,int> mp;
        for(int i=0;i<n;++i){
            mp[tasks[i]]++;
        }
        int count=0;
        for(auto e: mp){
            if(dp[e.second]==-1)return -1;
            count+=dp[e.second];
        }
        return count;
    }
};