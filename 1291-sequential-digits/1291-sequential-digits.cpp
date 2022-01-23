class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        string nums = "123456789";
        int lowSize = to_string(low).size();
        int highSize = to_string(high).size();
        for(int i=lowSize;i<=highSize;i++){
            for(int j=0;j<9-i+1;j++){
                int n = stoi(nums.substr(j,i));
                if(n>=low && n<=high)res.push_back(n);
            }
        }
        return res;
    }
};