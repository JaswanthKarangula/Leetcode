class Solution {
public:
    long long appealSum(string s) {
    map<char,vector<int>> mp;
    int n=s.size();
    for(int i=0;i<n;++i){
        mp[s[i]].push_back(i);
    }
    long long ans=0;
    for(auto e: mp){
        int m= e.second.size();
        int  prev=0;
        for(int i=0;i<m;++i){
            long long num_left=e.second[i]-prev;
            long long num_right=n-e.second[i]-1;
            long long count= (num_left+1ll)*1ll*(num_right+1ll);
            ans=(ans+count);
            prev=e.second[i]+1;
        }
    }
    return ans;
        
    }
};