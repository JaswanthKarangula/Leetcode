class Solution {
public:
    int calcWays(char c){
        if(c=='*')return 9;
        else if( c>='1' && c<='9')return 1;
        return 0;
    }
    int calcWays(char c,char n){
        if(c=='*' && n=='*'){
            return 15;
        }
        else if(c=='*'){
            return n > '6' ? 1 : 2;
        }
        else if(n=='*'){
            return c=='1'?9:c=='2'?6:0;
        }
        else {
            //10<= CC<=26
            string v = "";
            v=v+c;
            v=v+n;
            cout<<v<<endl;
            
            return stoi(v)<=26 && stoi(v)>=10;
        }
        return 0;
    }
    int numDecodings(string s) {
        int Mod =1e9+7;
        int n = s.size();
        if(n==0)return 0;
        
        vector<long> ways(n+1,0);
        ways[n]=1;
        if(s[n-1]!='0')ways[n-1]=calcWays(s[n-1]);
        for(int i=n-2;i>=0;--i){
            if(s[i]=='0')continue;
            ways[i]= ((ways[i+1]*calcWays(s[i]))%Mod + (ways[i+2]*calcWays(s[i],s[i+1]))%Mod)%Mod; 
        }
        return ways[0];
    }
    
};