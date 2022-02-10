class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cum=0;
        map<int,int> mp;
        int cnt = 0;
        mp[0]++;
        for(int i=0;i<nums.size();i++){
            cum += nums[i];
            cnt += mp[cum-k];
            mp[cum]++;
        }
        return cnt;
    }
};