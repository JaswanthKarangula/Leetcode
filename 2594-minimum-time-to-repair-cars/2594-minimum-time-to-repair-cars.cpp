class Solution {
public:
    int isPossible(long long mid , vector<int>& ranks, int cars){
        long long count =0;
        for(auto e: ranks){
            // long long num = sqrt( (mid / e))*1ll;
             count += sqrt( (mid / e))*1ll; //num;
        }
        return count>=cars;
        
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long res = ranks[0]*1ll*cars*cars;
        long long low =0;
        long long high = res;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(isPossible(mid,ranks,cars)){
                res = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return res;
    }
};