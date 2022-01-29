class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int res=0;
        stack<int> s;
        h.push_back(0);
        for(int i=0;i<h.size();++i){
            while(!s.empty() && h[s.top()]>=h[i]){
                int area=h[s.top()];
                s.pop();
                int prev=!s.empty()?s.top():-1;
                area*=(i-prev-1);
                res=max(res,area);
            }
            s.push(i);
        }
        return res;
    }
};