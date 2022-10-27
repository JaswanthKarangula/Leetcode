class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int n= nums.size();
        int max_end_here =nums[0],max_sofar=nums[0],min_end_here=nums[0];
        for(int i=1;i<n;++i){
            if(nums[i]<0)swap(max_end_here,min_end_here);
            max_end_here = max(max_end_here*nums[i],nums[i]);
            min_end_here = min(min_end_here*nums[i],nums[i]);
            max_sofar = max(max_sofar,max_end_here);
        }
        return max_sofar;
    }
};