class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int p =1;
        while(s.find(p)!=s.end()){
            p=p*2;
        }
        return p;
        
    }
};