class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum=0ll;
        int n= nums.size();
        for(auto e: nums)sum+=e;
        int res= n*1ll*(n+1)/2ll-sum;
        return res;
    }
};