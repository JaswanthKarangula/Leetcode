class Solution {
public:
    int isPossible(vector<int> p,int mid,int h){
        int count=0;
        for(auto i:p){
            count+=(i+mid-1)/mid;
        }
        //cout<<count<<endl;
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1;
        int high=1e9+7;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(piles,mid,h)){
                high=mid-1;
                ans=mid;
                
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};