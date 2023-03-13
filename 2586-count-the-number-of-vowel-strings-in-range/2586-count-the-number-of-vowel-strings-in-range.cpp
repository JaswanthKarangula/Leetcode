class Solution {
public:
    int isOk( char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return 1;
        return 0;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count =0;
        for(int i = left;i<=right;++i){
            if(isOk ( words[i][0]) && isOk(words[i][words[i].size()-1]) )count++;
        }
        return count;
    }
};