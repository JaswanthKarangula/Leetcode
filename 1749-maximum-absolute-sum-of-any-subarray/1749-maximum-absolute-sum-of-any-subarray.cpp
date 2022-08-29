class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        
        int n = nums.size();
        
        // basic idea 
        
        
        // vector<int> dp0(n,INT_MIN);
        // vector<int> dp1(n,INT_MAX);
        // dp0[0] = max(nums[0],0);
        // dp1[0] = min(nums[0],0);
        // int resMax=max(dp0[0],0);
        // int resMin =min(dp1[0],0);
        // for(int i=1;i<n;++i){
        //     dp0[i] = max({dp0[i-1]+nums[i],nums[i],0});
        //     dp1[i] = min({dp1[i-1]+nums[i],nums[i],0});
        //     resMax = max(resMax, dp0[i]);
        //     resMin = min(resMin, dp1[i]);
        // }
        // return max(resMax,abs(resMin));
        
        
        
        // Space Optimization
        int max_sofar =0,max_end =0;
        int min_sofar =0, min_end = 0;
        for(int i=0;i<n;++i){
            min_end = min({min_end+nums[i],nums[i],0});
            max_end = max({max_end+nums[i],nums[i],0});
            max_sofar = max(max_sofar,max_end);
            min_sofar = min(min_sofar , min_end);
        }
        
        return max(max_sofar,abs(min_sofar));
        
    }
};