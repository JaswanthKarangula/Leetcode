class Solution {
public:
    int removePalindromeSub(string s) {
        int isPalin=1;
        int n=s.size();
        for(int i=0;i<n/2;++i){
            if(s[i]!=s[n-i-1]){
                isPalin=0;
                break;
            }
        }
        
        if(isPalin)return 1;
        return 2;
    }
};