class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> a;
        int n = names.size();
        for(int i=0;i<n;++i){
            a.push_back({heights[i],names[i]});
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(int i=0;i<n;++i){
            names[i]=a[i].second;
        }
        return names;
    }
};