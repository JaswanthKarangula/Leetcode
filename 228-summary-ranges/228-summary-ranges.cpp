class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> temp;
        
        if(!nums.size()) return temp;
        
        bool formed = false;
        
        // Pointer to keep track
        int start = nums.at(0);
        int prev = nums.at(0);
        
        for(int i=0; i<nums.size(); i++){
            // If inserted then initialize for start
            if(formed){
                prev =  nums.at(i);
                start = nums.at(i);
                formed = false;
            }
            // If in range couninue 
            if(i<nums.size()-1 && nums.at(i+1) == prev+1) {
                    prev++;
                    continue;
                }
            //If single num then insert
                else if(start == prev) {
                    string a = to_string(start);
                    temp.push_back(a);
                    formed = true;
                }
             //Insert range
                else {
                    string a = to_string(start)+"->"+to_string(prev);
                    temp.push_back(a);
                    formed = true;
                }
            }
            
        
        return temp;
    }
};