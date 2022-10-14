class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        int n = nums.size();
        vector<int> nle(n,-1);
        stack<int> st;
        for(int i=0;i<n;++i){
            while( !st.empty() && nums[st.top()] >= nums[i] ){
                nle[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for(int i=0;i<n;++i){
            if(nle[i]==-1)continue;
            nle[i] = nums[nle[i]];
        }
        
        for(int i=0;i<n;++i){
            if(nle[i]==-1)continue;
            nums[i] -= nle[i];
        }
        return nums;
        
    }
};