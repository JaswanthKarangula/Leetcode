class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n =s.size();
        int mx=1;
        for(int i=1;i<n;++i){
            int j =i;
            int len =1;
            while(j<n && s[j]-s[j-1]==1){
                j++;
                len++;
            }
            
            mx= max(mx,len);
            i=max(j-1,i);
        }
        return mx;
    }
};