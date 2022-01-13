class Solution {
public:
    static bool mysort(vector<int>& a, vector<int>& b){
        return a[1]==b[1]?a[0]<b[0]:a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& p) {
        if(p.size()==0)return 0;
        //if(p.size()==1)return 1;
         int count = 0, arrow = INT_MIN;
        sort(p.begin(), p.end(), mysort);
        count=1;
        arrow=p[0][1];
        for(int i=1;i<p.size();++i){
            if(p[i][0]<=arrow)continue;
            count++;
            arrow=p[i][1];
        }
        return count;
    }
};