class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n= nums.size();
        // decreasing 
        vector<int> pref(n+1,1);
        // increasing 
        vector<int> suff(n+1,1);
        
        for(int i=1;i<n;++i){
            if(nums[i-1]>=nums[i])pref[i]=pref[i-1]+1;
        }
        for(int i=n-2;i>=0;--i){
            if(nums[i] <= nums[i+1])suff[i]=suff[i+1]+1;
        }
        vector<int> res;
        
        for(int i=1;i<n-1;++i){
            if(pref[i-1]>=k && suff[i+1]>=k)res.push_back(i);
        }
        return res;
    }
};