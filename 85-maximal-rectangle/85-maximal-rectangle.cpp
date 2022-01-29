class Solution {
public:
   int maximalRectangle(vector<vector<char> > &matrix) {
    if(matrix.empty()){
        return 0;
    }
    int maxRec = 0;
    vector<int> height(matrix[0].size(), 0);
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == '0'){
                height[j] = 0;
            }
            else{
                height[j]++;
            }
        }
        maxRec = max(maxRec, largestRectangleArea(height));
    }
    return maxRec;
}

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