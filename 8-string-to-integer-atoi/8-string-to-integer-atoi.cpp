class Solution {
public:
    int myAtoi(string s) {
        long max= INT_MAX;
        long min= INT_MIN;
        int i=0;
        int n=s.size();
        while(i<s.size() && s[i]==' ')i++;
        int sign=1;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        long result=0;
        while(i<n && s[i]<='9' && s[i]>='0'){
            result=result*10ll+(s[i]-'0');
            i++;
            if(sign*result > max)return max; 
            if(sign*result<min)return min;
        }
        return sign*result;
        
        
    }
};