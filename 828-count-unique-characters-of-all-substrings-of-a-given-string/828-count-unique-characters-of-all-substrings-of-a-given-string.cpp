class Solution {
public:
    int uniqueLetterString(string s) {
        map<char,vector<int>> mp;
    int n=s.size();
    
    for(int i=0;i<n;++i){
        mp[s[i]].push_back(i);
    }
    int ans=0;
    for(auto e: mp){
        int m= e.second.size();
        for(int i=0;i<m;++i){
            long long num_left=e.second[i];
            long long num_right=n-e.second[i]-1;
            // aacdeag
            // 0123456
            if(i!= m-1){
                num_right=e.second[i+1]-e.second[i]-1;
            }
            if(i!=0){
                num_left=e.second[i]-e.second[i-1]-1;
            }
            long long count= (num_left+1ll)*1ll*(num_right+1ll);
            //count= count%mod;
            //cout<<e.first<<"  "<<e.second[i]<<"  "<<count<<endl;
            ans=(ans+(int)count);

            
        }
    }
    return ans;
    }
};