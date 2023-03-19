class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        map<int,int> mp;
        for(auto e:nums)mp[e]++;
        int prev =-1;
        int count=0;
        for(auto e: mp){
            if(prev ==-1){
                prev = e.second;
            }
            else{
                count+=min(prev,e.second);
                prev = e.second + max(prev-e.second,0);
            }
        }
        return count;
    }
};
// 1 --> 1
// 2 --> 1
// 3 --> 1

// 1 --> 2
// 2 --> 4
// 3 --> 8