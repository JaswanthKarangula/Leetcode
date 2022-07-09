class Solution {
public:
    
    long long res = LLONG_MAX;
    
    void help(vector<int>& cookies, int i,int k,vector<long long >& k_vals){
        if(i==cookies.size()){
            res=min(res,*max_element(k_vals.begin(), k_vals.end()));
            //cout<<res<<endl;
            return ;
        }
        for(int j=0;j<k;++j){
            k_vals[j]+=cookies[i];
            help(cookies,i+1,k,k_vals);
            k_vals[j]-=cookies[i];
        }
        
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<long long> a(k,0ll);
        help(cookies,0,k,a);
        return res;
    }
    
};