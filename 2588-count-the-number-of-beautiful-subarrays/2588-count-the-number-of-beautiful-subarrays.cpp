class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int x =0;
        long long res=0;
        map<int,long long> mp;
        mp[0]=1;
        for(auto e: nums){
            res+=mp[e^x];
            
            x=e^x;
            mp[x]++;
        }
        return res;
    }
};