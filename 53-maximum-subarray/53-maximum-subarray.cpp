class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int max_end_here =0,max_sofar=INT_MIN;
        for(int i=0;i<n;++i){
            
            max_end_here = max(max_end_here+nums[i],0+nums[i]);
            max_sofar = max(max_sofar,max_end_here);
        }
        return max_sofar;
    }
};