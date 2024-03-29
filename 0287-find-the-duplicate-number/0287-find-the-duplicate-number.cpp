class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int  n = nums.size();
        int ans =-1;
        for(int i=0;i<n;++i){
            if(nums[abs(nums[i])-1]<0){
                ans = abs(nums[i]);
            }
            nums[abs(nums[i])-1]*=-1;
        }
        for(int i=0;i<n;++i){
            nums[i] = abs(nums[i]);
        }
        return ans;
    }
};