class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int i=k-1,j=k+1;
        int res=nums[k];
        int min_=nums[k];
        while(i>=0 && j<=nums.size()-1){
            int left=nums[i];
            int right=nums[j];
            if(left<right){
                min_=min(min_,right);
                j++;
            }
            else{
                min_=min(min_,left);
                i--;
            }
            res=max(res,min_*(j-i-1));
        }
        while(i>=0){
            min_=min(min_,nums[i]);
            i--;
             res=max(res,min_*(j-i-1));
        }
        while(j<nums.size()){
            min_=min(min_,nums[j]);
            j++;
             res=max(res,min_*(j-i-1));
        }
        return res;
    }
};