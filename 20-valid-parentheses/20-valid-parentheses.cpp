class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c==')' && (!st.empty() && st.top()=='(' )){
                st.pop();
                continue;
            }
            else if(c==')'){
                return 0;
            }
            if(c=='}' && (!st.empty() && st.top()=='{') ){
                st.pop();
                continue;
            }
            else if(c=='}'){
                return 0;
            }
            if(c==']' && (!st.empty() && st.top()=='[') ){
                st.pop();
                continue;
            }
            else if(c=='}'){
                return 0;
            }
            st.push(c);
        }
        if(!st.empty()){
            return 0;
            
        }
        return 1;
    }
};