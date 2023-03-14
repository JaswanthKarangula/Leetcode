class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        for(int i=0;i<n;++i){
            s.insert(nums[i]);
        }
        int p =1;
        while(s.find(p)!=s.end()){
            p=p*2;
        }
        return p;
        
    }
};