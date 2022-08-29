class Solution {
public:
    int help(vector<int>& nums ,int i ,int j){
        if(i>j)return INT_MIN;
        
        int mid = i+(j-i)/2;
        int lmax = help(nums,i,mid-1);
        int rmax = help(nums,mid+1,j);
        int sum=0,lsum=0,rsum=0;
        for(int ii=mid-1;ii>=i;--ii){
            sum+=nums[ii];
            lsum = max(lsum,sum);
        }
        sum=0;
        for(int ii=mid+1;ii<=j;++ii){
            sum+=nums[ii];
            rsum = max(rsum,sum);
        }
        return max({lmax,rmax,lsum+rsum+nums[mid]});
    }
    int maxSubArray(vector<int>& nums) {
        
        // dp -- approach;
         int n= nums.size();
//         int max_end_here =0,max_sofar=INT_MIN;
//         for(int i=0;i<n;++i){
            
//             max_end_here = max(max_end_here+nums[i],0+nums[i]);
//             max_sofar = max(max_sofar,max_end_here);
//         }
//         return max_sofar;
        
        // mergesort approach
        
        return help(nums,0,n-1);
        
        
    }
};