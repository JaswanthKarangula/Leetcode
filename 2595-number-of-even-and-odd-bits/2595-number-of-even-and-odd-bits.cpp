class Solution {
public:
    vector<int> evenOddBit(int n) {
        int e_count=0;
        int o_count=0;
        while(n){
            if(n&1){
                e_count++;
            }
            if(n&2){
                o_count++;
            }
            n=n>>2;
        }
        return {e_count,o_count};
    }
};