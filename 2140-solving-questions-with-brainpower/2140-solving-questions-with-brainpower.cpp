class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
        int n=q.size();
        vector<long long> dp1(n,0);//adding curr ele;
        vector<long long> dp2(n,0);//not consider;
        long long res=0ll;
        for(int i=n-1;i>=0;--i){
            long long score_selecting=q[i][0]*1ll;
            long long  to_add=0;
            if(i+q[i][1]+1<n)to_add=max(dp1[i+q[i][1]+1],dp2[i+q[i][1]+1]);
            dp1[i]=max(dp1[i],score_selecting+to_add);
            long long  not_selecting=0;
            if(i+1<n)not_selecting=max(dp1[i+1],dp2[i+1]);
            
            dp2[i]=max(dp2[i],not_selecting);
            res=max(res,max(dp1[i],dp2[i]));
            //cout<<dp1[i]<<"    "<<dp2[i]<<endl;
        }
        return res;
    }
};