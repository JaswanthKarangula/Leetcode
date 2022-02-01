class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_=1e9+5;
        int res=0;
        for(int i=0;i<n;++i){
            res=max(res,(prices[i]-min_));
            min_=min(min_,prices[i]);
                
        }
        return res;
        
    }
};