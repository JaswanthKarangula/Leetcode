class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<int> vis(n,0);
        map<int,vector<int>> mp;
        for(int i=0;i<n;++i){
            mp[nums[i]].push_back(i);
        }
        long long score=0;
        for(auto e: mp){
            for(auto a:e.second){
                if(vis[a])continue;
                vis[a]=1;
                score+=e.first;
                if(a+1<n)vis[a+1]=1;
                if(a-1>=0)vis[a-1]=1;
            }
        }
        return score;
            
    }
};