class Solution {
public:
    string removeStars(string s) {
        string res ="";
        for(int i=0;i<s.size();++i)
        {
            
            if(s[i]=='*' && res.size()>0){
                res.pop_back();
            }
            else res+=s[i];
        }
        return res;
    }
};