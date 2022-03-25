class Solution {
public:
    
    string longestPrefix(string s) {
       int n=s.size();
    vector<int> lps(n+1,0);
    int mx=0;
    int idx=-1;
    for(int i=1;i<n;++i){
        int j=lps[i-1];
        while(j>0 && s[i]!=s[j]){
            j=lps[j-1];
        }
        if(s[i]==s[j])j++;
        lps[i]=j;
        if(lps[i]>mx){
            mx=lps[i];
            idx=i;
        }
       // co
        
    }
    if(idx==-1)return "";
    return s.substr(0,lps[n-1]);
    }
    
};