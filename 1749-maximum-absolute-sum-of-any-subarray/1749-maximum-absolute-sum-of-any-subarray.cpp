class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        
        int n = nums.size();
        vector<int> dp0(n,INT_MIN);
        vector<int> dp1(n,INT_MAX);
        dp0[0] = max(nums[0],0);
        dp1[0] = min(nums[0],0);
        int resMax=max(dp0[0],0);
        int resMin =min(dp1[0],0);
        for(int i=1;i<n;++i){
            dp0[i] = max({dp0[i-1]+nums[i],nums[i],0});
            dp1[i] = min({dp1[i-1]+nums[i],nums[i],0});
            resMax = max(resMax, dp0[i]);
            resMin = min(resMin, dp1[i]);
        }
        return max(resMax,abs(resMin));
        
    }
};