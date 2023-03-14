class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int p =1;
        while(s.find(p)!=s.end()){
            p=p*2;
        }
        return p;
        
    }
};