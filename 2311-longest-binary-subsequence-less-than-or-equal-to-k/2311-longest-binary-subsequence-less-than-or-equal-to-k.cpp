class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n=s.size();
        int zCount=0; // count of zeroes 
        int val=0; // value of the binary number so far
        int count=0; // count of ones 
        int res=0; // number of bits traced so far 
        for(int i=0;i<n;++i){
            if(s[i]=='0')zCount++;
        }
        for(int i=n-1;i>=0;--i){
            
            if( (val | (1<<res))>k)break;
            if(s[i]=='1'){
                
            val = val | (1<<res);
                if(val>k)break;
                count++;
            }
            
            res++;
            
        }
        return count+zCount;
    }
};