class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> nge(n,-1);
        stack<int> st;
        for(int i=0;i<n;++i){
            while( !st.empty() && nums2[st.top()] < nums2[i] ){
                nge[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        vector<int> res;
        for(auto e: nums1){
            for(int i=0;i<n;++i){
                if(nums2[i]==e){
                    if(nge[i]==-1)res.push_back(-1);
                    else res.push_back(nums2[nge[i]]);
                }
            }
        }
        return res;
    }
};